/*define a structure employee with members like name, designation and salary then give 20% appraisal to manager, 15% to 
accountant and 10% to all others*/
#include<stdio.h>
#include<string.h>
typedef struct employee{
    char name[30];
    char des[100];
    int salary;
}var;
int main(){
    int n;
    printf("enter the number of employees: ");
    scanf("%d",&n);
    var s[n];
    printf("enter the details: \n");
    int i,r;
    for(i=0;i<n;i++){
        printf("enter the employee name: ");
        scanf("%s",s[i].name);
        printf("enter the employee designation: ");
        scanf("%s",s[i].des);
        printf("enter the employee salary: ");
        scanf("%d",&s[i].salary);
    }
    for(i=0;i<n;i++){
        if(strcmp(s[i].des,"manager")==0){
            s[i].salary=s[i].salary + 0.2*s[i].salary;
        }
        if(strcmp(s[i].des,"accountant")==0){
            s[i].salary=s[i].salary + 0.15*s[i].salary;
        }
        else{
            s[i].salary=s[i].salary+ 0.1*s[i].salary;
        }
    }
    printf("NAME  \t  DESIGNATION  \t  SALARY \n");
    for(i=0;i<n;i++){
        printf("%s  \t  %s  \t  %d\n",s[i].name,s[i].des,s[i].salary);
    }
    return 0;
}