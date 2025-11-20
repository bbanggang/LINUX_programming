#ifndef SHAPE_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define SHAPE_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문

#include <iostream> // 표준 입출력 스트림 사용
using namespace std; // std 네임스페이스 사용

class Circle { // 원을 표현하는 클래스 정의 시작
    int radius; // 반지름
public: // public 영역
    Circle(int radius = 1) { this->radius = radius; } // 생성자
    int getRadius() { return radius; } // 반지름을 반환하는 함수
    bool operator>(Circle a) { return radius > a.radius; } // 연산자 오버로딩
}; // Circle 클래스 정의 종료

template <class T> // 템플릿 매개변수 T 선언
T bigger(T a, T b) { // 두 개의 값 중 큰 값을 반환하는 함수
    if(a > b) return a; // a가 b보다 크면 a를 반환
    else return b; // 그렇지 않으면 b를 반환
} // 함수 정의 종료

#endif // 헤더 가드 종료
