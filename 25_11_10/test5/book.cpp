#include <iostream> // 표준 입출력 스트림 사용
#include "book.hpp" // book 클래스 선언 포함
using namespace std; // std 네임스페이스 사용

Book::Book(string t, int p, int pg) : title(t), price(p), pages(pg) {} // 값 생성자 정의
string Book::getTitle() { return title; } // 책 제목을 반환
bool operator<(string s, Book& b) { return s < b.title; } // s가 b의 제목보다 사전상 뒤에 있으면 true를 반환
