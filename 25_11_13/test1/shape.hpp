#ifndef SHAPE_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define SHAPE_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문

class Shape{ // 도형을 표현하는 클래스 정의 시작
private: // private 영역
    int x ,y; // x 좌표, y 좌표
protected: // protected 영역
    int getX(); // x 좌표를 반환하는 함수
    int getY(); // y 좌표를 반환하는 함수
    void setX(int x); // x 좌표를 설정하는 함수
    void setY(int y); // y 좌표를 설정하는 함수
public: // public 영역
    Shape(int x = 0, int y = 0); // 생성자 선언
    void show(); // 현재 값을 출력
}; // 클래스 정의 종료

class Circle : public Shape{ // 원을 표현하는 클래스 정의 시작
    int r; // 반지름
public: // public 영역
    Circle(int x = 0, int y = 0, int r = 0); // 생성자 선언
    void show(); // 현재 값을 출력
    void setCircle(int x, int y, int r); // 원의 값을 설정
}; // 클래스 정의 종료

class Rect : public Shape{ // 직사각형을 표현하는 클래스 정의 시작
    int w; // 너비
    int h; // 높이
public: // public 영역
    Rect(int x = 0, int y = 0, int w = 0, int h = 0); // 생성자 선언
    void show(); // 현재 값을 출력
    void setRect(int x, int y, int w, int h); // 직사각형의 값을 설정
}; // 클래스 정의 종료

class Triangle : public Shape{ // 삼각형을 표현하는 클래스 정의 시작
    int base; // 밑변
    int height; // 높이
public: // public 영역
    Triangle(int x = 0, int y = 0, int base = 0, int height = 0); // 생성자 선언
    void show(); // 현재 값을 출력
    void setTriangle(int x, int y, int base, int height); // 삼각형의 값을 설정
}; // 클래스 정의 종료

#endif // 헤더 가드 종료


