#include <iostream> // 표준 입출력 스트림 사용
#include "tv.hpp" // 정의된 TV 클래스를 포함하는 헤더 파일 포함
using namespace std; // std 네임스페이스 사용

TV::TV() {size = 20;} // 기본 생성자
TV::TV(int size) {
    this->size = size;
    cout << "TV 생성" << endl;
}
void TV::setSize(int size) {this->size = size;} // 크기 설정
int TV::getSize() {return size;} // 크기 반환

WideTV::WideTV(int size, bool videoIn) : TV(size) {
    this->videoIn = videoIn;
    cout << "WideTV 생성" << endl;
}
void WideTV::setVideoIn(bool videoIn) {this->videoIn = videoIn;} // 비디오 입력 여부 설정
bool WideTV::getVideoIn() {return videoIn;} // 비디오 입력 여부 반환

SmartTV::SmartTV() : WideTV(20, true) { // 기본 생성자
    this->ipAddr = ""; // IP 주소를 빈 문자열로 초기화
    cout << "SmartTV 생성" << endl; // 생성 메시지 출력
}

void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) { setSize(size); setVideoIn(videoIn); this->ipAddr = ipAddr;} // SmartTV 값 설정
string SmartTV::getIpAddr() {return ipAddr;} // IP 주소 반환