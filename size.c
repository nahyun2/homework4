#include<stdio.h>
#include<stdlib.h>

 void main()
 {
    int **x; //int���� ������ ����Ű�� ���� ������ x�� �����Ѵ�.
    printf(" [-----[�ֳ���] [2023041039]-----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); 
    // x�� ũ�⸦ ��ȣ ���� long ������ ��� (x�� �������̹Ƿ� �������� ũ�Ⱑ ���)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); 
    // x�� ����Ű�� ���� ũ�⸦ ��ȣ ���� long ������ ��� (*x�� ���������̹Ƿ� �������� ũ�⸦ ���)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); 
    // x�� ����Ű�� ���� ���� ũ�⸦ ��ȣ ���� long ������ ��� (**x�� int���� ����Ű�Ƿ� int�� ũ�Ⱑ ���)

 }

 // Github URL : https://github.com/nahyun2/homework4