#include<stdio.h>
typedef struct employee{
    int e_number;
    char e_name[30];
    int e_salary;
}var;
int main(){
    var s[100], max, min;
    int n,i;
    printf("enter the number of employees: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("enter employee number: ");
        scanf("%d",&s[i].e_number);
        printf("enter employee name: ");
        scanf("%s",s[i].e_name);
        printf("enter employee salary: ");
        scanf("%d",&s[i].e_salary);
        if (i == 0 || s[i].e_salary > max.e_salary) {
            max = s[i];
        }
        if (i == 0 || s[i].e_salary < min.e_salary) {
            min = s[i];
        }
    }
    printf("the details of the employee with highest salary is: \n");
    printf("\t number \t name \t salary \n");
    printf("\t %d \t %s \t %d\n",max.e_number,max.e_name,max.e_salary);
    printf("the details of the employee with lowest salary is: \n");
    printf("\t number \t name \t salary \n");
    printf("\t %d \t %s \t %d\n",min.e_number,min.e_name,min.e_salary);

    return 0;
}
