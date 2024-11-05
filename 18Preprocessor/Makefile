# Makefile
CC = clang	# 컴파일러
CFLAGS = -g	# 컴파일러 옵션. 디버깅 코드 포함
TARGET = main	# 타겟 파일

all: $(TARGET)	# make 명령어 수행 시 실행, $(TARGET) 내용 포함

$(TARGET): main.c calculator.c	# 컴파일러 실행 시 포함 파일
	$(CC) $(CFLAGS) main.c calculator.c -o $(TARGET)

#make clean 명령어 수행 시 타겟 파일 삭제
clean:	
	rm -f $(TARGET)
