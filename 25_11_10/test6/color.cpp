#include <iostream> // 표준 입출력 스트림 사용
#include "color.hpp" // color 클래스 선언 포함
using namespace std; // std 네임스페이스 사용

Color::Color(int r, int g, int b) : red(r), green(g), blue(b) {} // 값 생성자 정의
void Color::show() { cout << red << " " << green << " " << blue << endl; } // 현재 값 출력
Color Color::operator+( Color& other)  { // 두 멤버 변수를 더한 새 객체를 반환
    return Color(this->red + other.red, this->green + other.green, this->blue + other.blue); // 계산 결과 반환
} // 두 멤버 변수를 더한 새 객체를 반환
bool Color::operator==( Color& other)  { // 두 멤버 변수가 같으면 true를 반환
    return this->red == other.red && this->green == other.green && this->blue == other.blue; // 계산 결과 반환
} // 두 멤버 변수가 같으면 true를 반환