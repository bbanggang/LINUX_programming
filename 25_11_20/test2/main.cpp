#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "bigger.hpp" // bigger.hpp 헤더 파일 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    int a = 20, b = 50, c; // 정수 변수 선언
    c = bigger(a, b); // 20과 50 중 큰 값을 c에 저장
    cout << "20과 50 중 큰 값은 " << c << endl; // 정수 비교 결과 출력

    Circle donut(10), pizza(20), y; // Circle 객체 생성
    y = bigger(donut, pizza); // donut과 pizza 중 반지름이 큰 Circle을 y에 저장
    cout << "donut과 pizza 중 큰 반지름은 " << y.getRadius() << endl; // Circle 비교 결과 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝
