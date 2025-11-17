#include <iostream> // 표준 입출력 스트림 사용
#include "tv.hpp" // 정의된 TV 클래스를 포함하는 헤더 파일 포함
using namespace std; // std 네임스페이스 사용

TV::TV() {size = 20;} // 기본 생성자
TV::TV(int size) {this->size = size;} // 값 생성자
int TV::getSize() {return size;} // 크기 반환

WideTV::WideTV(int size, bool videoIn) : TV(size) {this->videoIn = videoIn;} // 값 생성자
bool WideTV::getVideoIn() {return videoIn;} // 비디오 입력 여부 반환

SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true) {this->ipAddr = ipAddr;} // 값 생성자
string SmartTV::getIpAddr() {return ipAddr;} // IP 주소 반환