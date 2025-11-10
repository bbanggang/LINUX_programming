#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "color.hpp" // color 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Color red(255, 0, 0), blue(0, 0, 255), c; // 빨강, 파랑, 결과 객체 생성
    c = red + blue; // 빨강과 파랑을 더해 보라색을 만듦
    c.show(); // 보라색 출력
    Color fuchsia(255, 0, 255); // 보라색 객체 생성
    if(c == fuchsia) cout << "보라색 맞음" << endl; // 보라색과 보라색이 같으면 보라색 맞음 출력
    else cout << "보라색 아님" << endl; // 보라색과 보라색이 같지 않으면 보라색 아님 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝


