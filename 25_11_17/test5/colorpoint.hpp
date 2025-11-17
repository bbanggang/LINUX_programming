#ifndef COLORPOINT_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define COLORPOINT_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문

#include <iostream> // 표준 입출력 스트림 사용
#include <string> // string 타입 사용
using namespace std; // std 네임스페이스 사용

class Point{ // 점을 표현하는 클래스 정의 시작
    int x, y; // x 좌표, y 좌표
public: // public 영역
    Point(int x, int y); // 생성자
    int getX(); // x 좌표를 반환하는 함수
    int getY(); // y 좌표를 반환하는 함수
protected: // protected 영역
    void move(int x, int y);
}; // Point 클래스 정의 종료

class ColorPoint : public Point{ // Point를 상속받는 ColorPoint 클래스 정의 시작
    string color; // 색상
public: // public 영역
    ColorPoint(); // 기본 생성자
    ColorPoint(int x, int y); // 2개 인자 생성자
    ColorPoint(int x, int y, string color); // 생성자
    void setPoint(int x, int y); // 포인트 설정
    void setColor(string color); // 색상 설정
    void show(); // 현재 값을 출력
}; // ColorPoint 클래스 정의 종료

#endif // 헤더 가드 종료


