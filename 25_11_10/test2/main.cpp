#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "complex.hpp" // Complex 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Complex x(2, 3); // 복소수 x 선언
    ++x;
    cout << "증가결과"; // 안내 문구 출력
    x.show(); // 증가 결과 출력
    x--; // x 감소
    cout << "감소결과"; // 안내 문구 출력
    x.show(); // 감소 결과 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝


