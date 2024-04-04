#include <stdio.h>

 struct student1 { //student1 구조체 정의
    char lastName; 
    int  studentId; 
    char grade; 
 }; 

 typedef struct { //typedef를 이용해 student2 구조체 정의
    char lastName;
    int  studentId;
    char grade;
 } student2; 
 
 int main() {

    printf(" [-----[최나현] [2023041039]-----]\n");
    
    struct student1 st1 = {'A', 100, 'A'}; // student1 구조체 변수 st1 선언 및 초기화
    printf("st1.lastName = %c\n", st1.lastName); // st1.lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1.studentId 출력
    printf("st1.grade = %c\n", st1.grade); // st1.grade 출력
    
    student2 st2 = {'B', 200, 'B'}; // student2 구조체 변수 st2 선언 및 초기화
    printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2.studentId 출력
    printf("st2.grade = %c\n", st2.grade); // st2.grade 출력
    
    student2 st3; // student2 구조체 변수 st3 선언
    st3 = st2; // st3을 st2 값으로 치환
    printf("\nst3.lastName = %c\n", st3.lastName); // st3.lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3.studentId 출력
    printf("st3.grade = %c\n", st3.grade); // st3.grade 출력
    
    /* equality test */
    if(st3.lastName == st2.lastName && st2.studentId == st3.studentId && st2.grade == st3.grade) 
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
    //st2와 st3가 같으면 equal을 출력하고 다르면 not equal을 출력한다.
 }