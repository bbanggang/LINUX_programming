#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "shape.hpp" // Shape 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Circle x(0,0,2); // 원 객체 생성
    Rect y(1,1,5,10); // 직사각형 객체 생성
    Triangle z(2,2,5,10); // 삼각형 객체 생성
    x.show(); y.show(); z.show(); // 각 도형의 값을 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝


