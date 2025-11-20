#ifndef MAX_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define MAX_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문

template <class T> // 템플릿 매개변수 T 선언
T getmax(T* arr, int size) { // 배열의 최댓값을 반환하는 함수
    T max = arr[0]; // 최댓값을 초기화
    for(int i = 1; i < size; i++) { // 배열의 모든 요소를 순회
        if(arr[i] > max) max = arr[i]; // 현재 요소가 최댓값보다 크면 최댓값을 현재 요소로 업데이트
    } // 배열의 모든 요소를 순회한 후
    return max; // 최댓값을 반환
} // 함수 정의 종료

#endif // 헤더 가드 종료
