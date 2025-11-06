#include <iostream> // 표준 입출력 스트림 사용
#include "complex.hpp" // 정의된 Complex 클래스를 포함하는 헤더 파일 포함
using namespace std; // std 네임스페이스 사용

Complex::Complex() : real(0), img(0) {} // 기본 생성자 정의
Complex::Complex(int r, int i) : real(r), img(i) {} // 값 생성자 정의
Complex Complex::operator+(Complex& other) { // + 연산자 오버로딩 함수 정의
    return Complex(real + other.real, img + other.img); // 결과 반환
}
void Complex::show() { cout << real << " + " << img << "j" << endl; } // 현재 값을 출력