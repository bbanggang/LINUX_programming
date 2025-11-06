#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "complex.hpp" // Complex 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Complex x(2, 3), y(-5, 10), mul; // 복소수 x, y 및 결과 변수 mul 선언
    mul = x * y; // 두 복소수의 곱을 계산하여 sum에 저장
    cout << "두 복소수의 곱은"; // 안내 문구 출력
    mul.show(); // 곱 결과 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝


