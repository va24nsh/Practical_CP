#include<stdio.h>

typedef struct Student{
    char *name;
    int roll_number;
    int marks_math;
    int marks_english;
    int marks_cp;
    int marks_dc;
}stu;

int main()
{
    stu *s1;
    s1 = (stu *)malloc(sizeof(stu));
    gets(s1->name);
    fflush(stdin);
    scanf("%d", &s1->roll_number);
    fflush(stdin);
    scanf("%d", &s1->marks_english);
    scanf("%d", &s1->marks_cp);
    scanf("%d", &s1->marks_dc);
    scanf("%d", &s1->marks_math);

    printf("Name of the student: %s \nRoll Number: %d \nMarks in CP are: %d", s1->name, s1->roll_number, s1->marks_cp);

    return 0;
}