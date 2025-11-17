#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include <string> // 문자열 사용을 위한 헤더 포함
#include "tv.hpp" // TV 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    SmartTV htv; // SmartTV 객체 생성
    htv.setSmartTV(50, false,"192.0.0.2"); // SmartTV 값 설정
    cout << "size=" << htv.getSize() << endl; // 크기 출력
    cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl; // 비디오 입력 여부 출력
    cout << "IP=" << htv.getIpAddr() << endl; // IP 주소 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝