#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "book.hpp" // book 클래스 선언을 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    Book book("벼룩시장", 0, 50);
    if(!book) cout << "공짜다" << endl;
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝


