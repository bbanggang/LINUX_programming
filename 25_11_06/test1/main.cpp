#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
using namespace std; // std 네임스페이스를 사용
class Complex; // Complex 클래스 선언
Complex ComplexAdd(Complex x, Complex y); // 두 Complex를 더해 Complex를 반환하는 함수 선언

class Complex{ // 복소수를 표현하는 클래스 정의 시작
    int real; // 실수부
    int img; // 허수부
public: // public 영역
    Complex() : real(0), img(0) {} // 기본 생성자
    Complex(int r, int i) : real(r), img(i) {} // 값 생성자: 실수부와 허수부 설정
    Complex operator+(Complex& other)  {
        return Complex(real + other.real, img + other.img);
    }
    void show() {cout << real << " + " << img << "j" << endl;} // 현재 값을 출력
}; // 클래스 정의 종료

int main() { // main 함수의 머리
    Complex x(2, 3), y(-5, 10), sum; // 복소수 x, y 및 결과 변수 sum 선언
    sum = x + y;
    cout << "두 복소수의 합은";
    sum.show();
    return 0;
}   // main 함수의 끝


