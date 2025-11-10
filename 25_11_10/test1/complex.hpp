#ifndef COMPLEX_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define COMPLEX_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문

class Complex{ // 복소수를 표현하는 클래스 정의 시작
    int real; // 실수부
    int img; // 허수부
public: // public 영역
    Complex(); // 기본 생성자 선언
    Complex(int r, int i); // 값 생성자 선언
    Complex operator++(); // 전위 증가 연산자 오버로딩 함수 선언
    Complex operator--(int); // 후위 감소 연산자 오버로딩 함수 선언
    void show(); // 현재 값을 출력
}; // 클래스 정의 종료

#endif // 헤더 가드 종료


