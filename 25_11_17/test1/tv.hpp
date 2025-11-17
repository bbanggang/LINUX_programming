#ifndef TV_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define TV_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문
#include <string> // 문자열 사용을 위한 헤더 포함
using namespace std; // std 네임스페이스 사용

class TV{
    int size; // 크기
public: // public 영역
    TV(); // 기본 생성자
    TV(int size); // 값 생성자
    int getSize(); // 크기 반환
}; // TV 클래스 정의 종료

class WideTV : public TV{ // TV를 상속받는 WideTV 클래스
    bool videoIn; // 비디오 입력 여부
public: // public 영역
    WideTV(int size, bool videoIn); // 값 생성자
    bool getVideoIn();    // 비디오 입력 여부 반환
}; // WideTV 클래스 정의 종료

class SmartTV : public WideTV{ // WideTV를 상속받는 SmartTV 클래스
    string ipAddr; // IP 주소
public: // public 영역
    SmartTV(string ipAddr, int size); // 값 생성자
    string getIpAddr(); // IP 주소 반환
}; // SmartTV 클래스 정의 종료

#endif // 헤더 가드 종료


