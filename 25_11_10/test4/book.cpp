#include <iostream> // 표준 입출력 스트림 사용
#include "book.hpp" // book 클래스 선언 포함
using namespace std; // std 네임스페이스 사용

Book::Book(string t, int p, int pg) : title(t), price(p), pages(pg) {} // 값 생성자 정의
bool Book::operator!() { return this->price == 0; } // 책 가격이 0이면 true를 반환