#include <stdio.h>

 struct student {
    char lastName[13];   /* 13 bytes */
    int studentId;       /* 4 bytes */
    short grade;         /* 2 bytes */
 };
 
 int main()
 {
    printf(" [-----[ÃÖ³ªÇö] [2023041039]-----]");
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int     = %ld\n", sizeof(int));
    printf("size of short   return 0; } = %ld\n", sizeof(short));
 }