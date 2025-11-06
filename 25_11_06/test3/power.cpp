#include <iostream> // 표준 입출력 스트림 사용
#include "power.hpp" // Power 클래스 선언 포함
using namespace std; // std 네임스페이스 사용

Power::Power(int k, int p) : kick(k), punch(p) {} // 값 생성자 정의
void Power::show() { cout <<  "kick: " << kick << ", punch: " << punch << endl; } // 현재 값 출력
Power Power::operator-(int value) { // 두 멤버 변수에서 동일 값 빼기
    return Power(kick - value, punch - value); // 계산 결과 반환
}