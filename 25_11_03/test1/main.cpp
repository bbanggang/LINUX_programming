#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
using namespace std; // std 네임스페이스를 사용
class Complex; // Complex 클래스 선언
Complex ComplexAdd(Complex x, Complex y); // 두 Complex를 더해 Complex를 반환하는 함수 선언

class Complex{ // 복소수를 표현하는 클래스 정의 시작
    int real; // 실수부
    int img; // 허수부
public: // public 영역
    Complex() : real(0), img(0) {} // 기본 생성자
    Complex(int r, int i) : real(r), img(i) {
        cout << "복소수 " << r << " + " << i << "j" << " 생성" << endl; // 복소수 생성 메시지 출력
    } // 값 생성자: 실수부와 허수부 설정
    friend Complex ComplexAdd(Complex x, Complex y); // 덧셈 함수가 private 멤버 접근 가능하도록 friend 선언
    void show() {cout << real << " + " << img << "j" << endl;} // 현재 값을 출력
}; // 클래스 정의 종료

Complex ComplexAdd(Complex x, Complex y) { // 두 복소수를 더해 새 Complex를 반환하는 함수 정의
    int real = x.real + y.real; // 실수부 합 계산
    int img = x.img + y.img; // 허수부 합 계산
    return Complex(real, img); // 합산 결과로 객체를 생성하여여 반환
}

int main() { // main 함수의 머리
    Complex x(2, 3), y(-5, 10), sum; // 복소수 x, y 및 결과 변수 sum 선언
    sum = ComplexAdd(x, y); // x와 y를 더해 sum에 대입
    cout << "두 복소수의 합은" << endl; // 문자열열 출력
    sum.show(); // 합 결과 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝끝


