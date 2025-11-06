#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "power.hpp" // Power 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Power a(3,5), b; // a는 (3,5)로 초기화, b는 (0,0) 초기화
    a.show(); // a의 멤버 변수 출력
    b.show(); // b의 멤버 변수 출력
    b = a - 2; // a의 두 멤버 변수에서 2씩 뺀 새 객체를 b에 대입
    a.show(); // a는 변하지 않음
    b.show(); // b의 멤버 변수 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝


