#include <stdio.h>

 struct student {
    char lastName[13];   /* 13 bytes */ // lastName�� �����ϴ� �迭, 13����Ʈ
    int studentId;       /* 4 bytes */ // studentId�� �����ϴ� int�� ����, 4����Ʈ
    short grade;         /* 2 bytes */ // grade�� �����ϴ� short�� ����, 2����Ʈ
 };
 
 int main()
 {
    printf(" [-----[�ֳ���] [2023041039]-----]\n");
    struct student pst; // stdent ����ü�� pst ���� ���� 
    printf("size of student = %ld\n", sizeof(struct student)); // ����ü�� ũ�⸦ long�� ������ ���
    printf("size of int     = %ld\n", sizeof(int)); // int ���� ũ�⸦ long�� ������ ���
    printf("size of short   = %ld\n", sizeof(short)); // short ���� ũ�⸦ long�� ������ ���
    return 0; 
 }

 // Github URL : https://github.com/nahyun2/homework4