/*define a structure student with members like name, rollnumber, marks in maths,english,science and print thier average in another column*/
#include<stdio.h>
typedef struct student{
    char name[30];
    int rollno;
    int m_math;
    int m_english;
    int m_science;
    int avg;
}var;
int main(){
    int n;
    printf("enter the number of students:");
    scanf("%d",&n);
    var s[n];
    int i;
    printf("enter the details:\n ");
    for(i=0;i<n;i++){
        printf("ener the student name: ");
        scanf("%s",s[i].name);
        printf("enter the roll no: ");
        scanf("%d",&s[i].rollno);
        printf("enter the marks in maths: ");
        scanf("%d",&s[i].m_math);
        printf("enter the marks in english: ");
        scanf("%d",&s[i].m_english);
        printf("enter the marks in science: ");
        scanf("%d",&s[i].m_science);
        s[i].avg=(s[i].m_math + s[i].m_english + s[i].m_science)/3;
    }
    printf("NAME  \t  ROLL NO  \t  MATHS  \t  ENGLISH  \t  SCIENCE  \t  AVG\n");
    for(i=0;i<n;i++){
        printf("%s  \t  %d  \t  %d  \t  %d  \t  %d  \t  %d  \n",s[i].name,s[i].rollno,s[i].m_math,s[i].m_english,s[i].m_science,s[i].avg);
    }
    return 0;
}