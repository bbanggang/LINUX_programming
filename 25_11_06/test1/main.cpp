#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "complex.hpp" // Complex 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Complex x(2, 3), y(-5, 10), sum; // 복소수 x, y 및 결과 변수 sum 선언
    sum = x + y; // 두 복소수의 합을 계산하여 sum에 저장
    cout << "두 복소수의 합은"; // 안내 문구 출력
    sum.show(); // 합 결과 출력
    return 0; // 정상 종료 코드 반환
}   // main 함수의 끝


