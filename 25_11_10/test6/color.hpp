#ifndef COLOR_HPP // 헤더 파일이 중복으로 포함되지 않도록 하는 전처리기 지시문
#define COLOR_HPP // 해당 헤더가 이미 포함되었는지 확인하는 전처리기 지시문

class Color{ // Color 클래스 정의 시작
    int red; // 멤버 변수
    int green; // 멤버 변수
    int blue; // 멤버 변수
public: // public 영역
    Color(int r = 0, int g = 0, int b = 0); // 생성자: 기본값 0,0,0 허용
    void show(); // 현재 색상을 출력
    Color operator+( Color& other) ; // 두 멤버 변수를 더한 새 객체를 반환
    bool operator==( Color& other) ; // 두 멤버 변수가 같으면 true를 반환
}; // 클래스 정의 종료

#endif // 헤더 가드 종료


