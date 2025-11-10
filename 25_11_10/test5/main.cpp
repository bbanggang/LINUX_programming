#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "book.hpp" // book 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Book a("청춘", 20000, 300); // a는 "청춘", 20000, 300으로 초기화
    string b; // b는 문자열
    cout << "책 이름을 입력하세요>>"; // 책 이름 입력 안내 문구 출력
    getline(cin, b); // 책 이름 입력
    if(b < a) cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl; // 책 이름 비교 결과 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝
