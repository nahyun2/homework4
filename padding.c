#include <stdio.h>

 struct student {
    char lastName[13];   /* 13 bytes */ // lastName을 저장하는 배열, 13바이트
    int studentId;       /* 4 bytes */ // studentId를 저장하는 int형 변수, 4바이트
    short grade;         /* 2 bytes */ // grade를 저장하는 short형 변수, 2바이트
 };
 
 int main()
 {
    printf(" [-----[최나현] [2023041039]-----]\n");
    struct student pst; // stdent 구조체로 pst 변수 선언 
    printf("size of student = %ld\n", sizeof(struct student)); // 구조체의 크기를 long형 정수로 출력
    printf("size of int     = %ld\n", sizeof(int)); // int 형의 크기를 long형 정수로 출력
    printf("size of short   = %ld\n", sizeof(short)); // short 형의 크기를 long형 정수로 출력
    return 0; 
 }

 // Github URL : https://github.com/nahyun2/homework4