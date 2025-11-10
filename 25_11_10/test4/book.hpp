#ifndef BOOK_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define BOOK_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문
#include <string> // string 타입 사용을 위한 헤더 포함
using namespace std; // std 네임스페이스 사용

class Book{ // Book 클래스 정의 시작
    string title; // 책 제목
    int price, pages; // 책 가격, 페이지 수
public: // public 영역
    Book(string t= "", int p=0, int pg=0); // 생성자: 기본값
    bool operator!(); // 책 가격이 0이면 true를 반환
}; // 클래스 정의 종료

#endif // 헤더 가드 종료


