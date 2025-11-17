#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "colorpoint.hpp" // ColorPoint 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    ColorPoint zeroPoint; // 색상 포인트 객체 생성
    zeroPoint.show(); // 색상 포인트 값 출력

    ColorPoint cp(5, 5); // 색상 포인트 객체 생성
    cp.setPoint(10, 20); // 포인트 설정
    cp.setColor("BLUE"); // 색상 설정
    cp.show(); // 색상 포인트 값 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝


