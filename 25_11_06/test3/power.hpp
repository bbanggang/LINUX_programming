#ifndef POWER_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define POWER_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문

class Power{ // Power 클래스 정의 시작
    int kick; // 멤버 변수
    int punch; // 멤버 변수
public: // public 영역
    Power(int k = 0, int p = 0); // 생성자: 기본값 0,0 허용
    void show(); // 현재 능력치를 출력
    Power operator-(int value); // 두 멤버 변수에서 같은 값 value를 빼는 연산자
}; // 클래스 정의 종료

#endif // 헤더 가드 종료


