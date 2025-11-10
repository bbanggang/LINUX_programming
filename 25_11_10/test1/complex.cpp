#include <iostream> // 표준 입출력 스트림 사용
#include "complex.hpp" // 정의된 Complex 클래스를 포함하는 헤더 파일 포함
using namespace std; // std 네임스페이스 사용

Complex::Complex() : real(0), img(0) {} // 기본 생성자 정의
Complex::Complex(int r, int i) : real(r), img(i) {
    cout << "복소수 " << r << " + " << i << "j" << " 생성" << endl; // 복소수 생성 메시지 출력
} // 값 생성자 정의
Complex& Complex::operator++() { // 전위 증가 연산자 오버로딩 함수 정의
    real++; // 실수부 증가
    img++; // 허수부 증가
    return *this; // 자기 자신을 반환
}
Complex Complex::operator--(int) { // 후위 감소 연산자 오버로딩 함수 정의
    Complex temp = *this; // 자기 자신을 임시 객체에 저장
    real--; // 실수부 감소
    img--; // 허수부 감소
    return temp; // 임시 객체를 반환
}
void Complex::show() { cout << real << " + " << img << "j" << endl; } // 현재 값을 출력