#include <iostream> // 표준 입출력 스트림 사용
#include "colorpoint.hpp" // 정의된 ColorPoint 클래스를 포함하는 헤더 파일 포함
using namespace std; // std 네임스페이스 사용

Point::Point(int x, int y) : x(x), y(y) {} // 생성자
int Point::getX() { return this->x; } // x 좌표를 반환하는 함수
int Point::getY() { return this->y; } // y 좌표를 반환하는 함수
void Point::move(int x, int y) { this->x = x; this->y = y; } // 포인트 설정

ColorPoint::ColorPoint(int x, int y, string color) : Point(x, y), color(color) {} // 생성자
void ColorPoint::setPoint(int x, int y) { this->move(x, y); } // 포인트 설정
void ColorPoint::setColor(string color) { this->color = color; } // 색상 설정
void ColorPoint::show() { cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl; } // 색상 포인트 값 출력
