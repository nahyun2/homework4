#include<stdio.h>
#include<stdlib.h>

 void main()
 {
    int **x; //int형의 변수를 가리키는 이중 포인터 x를 선언한다.
    printf(" [-----[최나현] [2023041039]-----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); 
    // x의 크기를 부호 없는 long 정수로 출력 (x는 포인터이므로 포인터의 크기가 출력)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); 
    // x가 가리키는 값의 크기를 부호 없는 long 정수로 출력 (*x는 포인터이이므로 포인터의 크기를 출력)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); 
    // x가 가리키는 값의 값의 크기를 부호 없는 long 정수로 출력 (**x는 int형을 가리키므로 int의 크기가 출력)

 }

 // Github URL : https://github.com/nahyun2/homework4