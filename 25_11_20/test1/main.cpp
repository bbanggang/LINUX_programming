#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
#include "max.hpp" // max.hpp 헤더 파일 포함
using namespace std; // std 네임스페이스를 사용

int main() { // main 함수의 머리
    int a[5] = {-5, 10, 30, 20, 6}; // 정수배열 초기화
    double b[4] = {3.14, 1.5, -6.0, 0.5}; // 실수배열 초기화
    char c[3] = {'a', 'x', 'p'}; // 문자배열 초기화
    cout << "정수배열의 최댓값은 " << getmax(a, 5) << endl; // 정수배열의 최댓값 출력
    cout << "실수배열의 최댓값은 " << getmax(b, 4) << endl; // 실수배열의 최댓값 출력
    cout << "문자배열의 최댓값은 " << getmax(c, 3) << endl; // 문자배열의 최댓값 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝
