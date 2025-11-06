#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
using namespace std; // std 네임스페이스를 사용
class Complex; // Complex 클래스 선언

class Complex { // Complex 클래스 선언 시작
    int real; // 실수부
    int img; // 허수부
public: // public 영역
    Complex() : real(0), img(0) {} // 기본 생성자
    Complex(int r, int i) : real(r), img(i) {} // 값 생성자: 실수부와 허수부 초기화
    void show() const { cout << real << " + " << img << "j" << endl; } // 값 출력
    friend class ComplexManager; // ComplexManager가 private 멤버 접근 가능하도록 허용
}; // Complex 클래스 선언 종료

class ComplexManager { // ComplexManager 클래스 선언 시작
public: // public 영역
    Complex ComplexAdd(const Complex& x, const Complex& y) const { // 두 복소수의 합을 반환
        return Complex(x.real + y.real, x.img + y.img); // 실수/허수부 합으로 새 Complex 생성
    } // ComplexAdd 함수 종료
    Complex ComplexSub(const Complex& x, const Complex& y) const { // 두 복소수의 차를 반환
        return Complex(x.real - y.real, x.img - y.img); // 실수/허수부 차로 새 Complex 생성
    } // ComplexSub 함수 종료
}; // ComplexManager 클래스 선언 종료

int main() { // main 함수의 머리
    Complex x(5, 5), y(2, 2), sum, sub; // 복소수와 결과 변수 선언
    ComplexManager man; // ComplexManager 객체 생성
    sum = man.ComplexAdd(x, y); // 덧셈 수행 결과를 sum에 대입
    cout << "두 복소수의 합은 "; // 문자열 출력
    sum.show(); // 합 결과 출력
    sub = man.ComplexSub(x, y); // 뺄셈 수행 결과를 sub에 대입
    cout << "두 복소수의 차는 "; // 문자열 출력
    sub.show(); // 차 결과 출력
    return 0; // 0을 반환하고 함수 종료
} // main 함수의 끝
