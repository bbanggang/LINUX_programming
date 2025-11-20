#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
using namespace std; // std 네임스페이스를 사용

class Circle { // 원을 표현하는 클래스 정의 시작
    int radius; // 반지름
public: // public 영역
    Circle(int radius = 1); // 생성자
    int getRadius(); // 반지름을 반환하는 함수
    bool operator>(Circle a); // 연산자 오버로딩
}; // Circle 클래스 정의 종료

template <class T> // 템플릿 매개변수 T 선언
T bigger(T a, T b); // 두 개의 값 중 큰 값을 반환하는 함수

int main() { // main 함수의 머리
    int a = 20, b = 50, c; // 정수 변수 선언
    c = bigger(a, b); // 20과 50 중 큰 값을 c에 저장
    cout << "20과 50 중 큰 값은 " << c << endl; // 정수 비교 결과 출력

    Circle donut(10), pizza(20), y; // Circle 객체 생성
    y = bigger(donut, pizza); // donut과 pizza 중 반지름이 큰 Circle을 y에 저장
    cout << "donut과 pizza 중 큰 반지름은 " << y.getRadius() << endl; // Circle 비교 결과 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝

Circle::Circle(int radius) { this->radius = radius; } // 생성자
int Circle::getRadius() {return radius;} // 반지름을 반환하는 함수
bool Circle::operator>(Circle a) { return radius > a.radius; } // 연산자 오버로딩

template <class T> // 템플릿 매개변수 T 선언
T bigger(T a, T b) { // 두 개의 값 중 큰 값을 반환하는 함수
    if(a > b) return a; // a가 b보다 크면 a를 반환
    else return b; // 그렇지 않으면 b를 반환
} // 함수 정의 종료
