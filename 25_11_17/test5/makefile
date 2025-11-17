CX := g++ # 컴파일러 설정
CXFLAGS := -g -Wall -std=c++17 -O2 # 컴파일 옵션
TARGET := colorpoint_app # 실행파일 이름
SRCS := main.cpp colorpoint.cpp # 오브젝트 파일
OBJS := $(SRCS:.cpp=.o) # 오브젝트 파일
DEPS := colorpoint.hpp # 의존성 파일

$(TARGET): $(OBJS) # 실행파일 생성
	$(CX) $(CXFLAGS) -o $@ $^ # 결과적으로 모든 .o를 묶어 실행 파일 생성
# $@: 현재 타깃 이름(= $(TARGET)).
# $^: 모든 의존성 목록(= $(OBJS)).

%.o: %.cpp $(DEPS) # 오브젝트 파일 생성
	$(CX) $(CXFLAGS) -c $< -o $@ # 오브젝트 파일 생성
# $<: 첫 번째 의존성(여기서는 대응되는 X.cpp).
# $@: 타깃 오브젝트 파일(X.o).

# 삭제
.PHONY : clean
clean :
	$(RM) $(OBJS) $(TARGET)


