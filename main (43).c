#include<stdio.h>
typedef struct employee{
    int e_number;
    char e_name[30];
    int e_salary;
}var;
int main(){
    var s[100], t;
    int n,i,j;
    printf("enter the number of employees: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("enter employee number: ");
        scanf("%d",&s[i].e_number);
        printf("enter employee name: ");
        scanf("%s",s[i].e_name);
        printf("enter employee salary: ");
        scanf("%d",&s[i].e_salary);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[i].e_salary>s[j].e_salary){
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    printf("Number \t Name \t Salary \n");
    for(i=0;i<n;i++){
        printf("%d \t %s \t %d",s[i].e_number,s[i].e_name,s[i].e_salary);
    }
    return 0;
}
