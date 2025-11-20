#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 포함
using namespace std; // std 네임스페이스를 사용

template <class T> // 템플릿 매개변수 T 선언
T getmax(T* arr, int size);

int main() { // main 함수의 머리
    int a[5] = {-5, 10, 30, 20, 6}; // 정수배열 초기화
    double b[4] = {3.14, 1.5, -6.0, 0.5}; // 실수배열 초기화
    char c[3] = {'a', 'x', 'p'}; // 문자배열 초기화
    cout << "정수배열의 최댓값은 " << getmax(a, 5) << endl; // 정수배열의 최댓값 출력
    cout << "실수배열의 최댓값은 " << getmax(b, 4) << endl; // 실수배열의 최댓값 출력
    cout << "문자배열의 최댓값은 " << getmax(c, 3) << endl; // 문자배열의 최댓값 출력
    return 0; // 0을 반환하고 함수 종료
}   // main 함수의 끝

template <class T> // 템플릿 매개변수 T 선언
T getmax(T* arr, int size) { // 배열의 최댓값을 반환하는 함수
    T max = arr[0]; // 최댓값을 초기화
    for(int i = 1; i < size; i++) { // 배열의 모든 요소를 순회
        if(arr[i] > max) max = arr[i]; // 현재 요소가 최댓값보다 크면 최댓값을 현재 요소로 업데이트
    } // 배열의 모든 요소를 순회한 후
    return max; // 최댓값을 반환
} // 함수 정의 종료