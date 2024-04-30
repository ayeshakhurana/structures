//define a structure nested struture employee with members like name,salary and date of joining input data of2 employees then check if they have the same date of joining
#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yy;
};
typedef struct student{
    char name[30];
    int sal;
    struct date doj;
}var;
int main(){
    int i;
    var s[2];
    for(i=0;i<2;i++){
        printf("enter name of employee %d: ",(i+1));
        scanf("%s",s[i].name);
        printf("enter salary of employee %d:",(i+1));
        scanf("%d",&s[i].sal);
        printf("enter date of joining of employee %d: ",(i+1) );
        scanf("%d",&s[i].doj.dd);
        printf("enter month of joining of employee %d: ",(i+1));
        scanf("%d",&s[i].doj.mm);
        printf("enter year of joining of employee %d: ",(i+1));
        scanf("%d",&s[i].doj.yy);
    }
    for(i=0;i<2;i++){
        if(s[i].doj.dd==s[i+1].doj.dd && s[i].doj.mm==s[i+1].doj.mm && s[i].doj.yy == s[i+1].doj.yy){
            printf("yes");
            break;
        }
        else{
            printf("no");
        }
    }
    return 0;
}