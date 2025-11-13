#include <iostream> // 표준 입출력 스트림 사용
#include "shape.hpp" // 정의된 Shape 클래스를 포함하는 헤더 파일 포함
using namespace std; // std 네임스페이스 사용

Shape::Shape(int x, int y) : x(x), y(y) {} // 생성자 정의
Circle::Circle(int x, int y, int r) : Shape(x, y), r(r) {} // 생성자 정의
Rect::Rect(int x, int y, int w, int h) : Shape(x, y), w(w), h(h) {} // 생성자 정의
Triangle::Triangle(int x, int y, int base, int height) : Shape(x, y), base(base), height(height) {} // 생성자 정의

int Shape::getX() { return this->x; } // x 좌표를 반환하는 함수
int Shape::getY() { return this->y; } // y 좌표를 반환하는 함수
void Shape::setX(int x) { this->x = x; } // x 좌표를 설정하는 함수
void Shape::setY(int y) { this->y = y; } // y 좌표를 설정하는 함수

void Shape::show() { cout << "좌표 (" << this->x << ", " << this->y << ")" << endl; } // 현재 값을 출력
void Circle::show() { cout << "좌표 (" << this->getX() << ", " << this->getY() << ")에 반지름 " << this->r << "인 원" << endl; } // 현재 값을 출력
void Rect::show() { cout << "좌표 (" << this->getX() << ", " << this->getY() << ")에 너비 " << this->w << " 높이 " << this->h << "인 직사각형" << endl; } // 현재 값을 출력
void Triangle::show() { cout << "좌표 (" << this->getX() << ", " << this->getY() << ")에 밑변 " << this->base << " 높이 " << this->height << "인 삼각형" << endl; } // 현재 값을 출력

void Circle::setCircle(int x, int y, int r) { this->setX(x); this->setY(y); this->r = r; } // 원의 값을 설정
void Rect::setRect(int x, int y, int w, int h) { this->setX(x); this->setY(y); this->w = w; this->h = h; } // 직사각형의 값을 설정
void Triangle::setTriangle(int x, int y, int base, int height) { this->setX(x); this->setY(y); this->base = base; this->height = height; } // 삼각형의 값을 설정
