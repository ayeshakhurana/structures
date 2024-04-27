#include<string.h>
typedef struct employee{
char edes[100];
char ename[30];
int esalary;
}s[100];
int main(){
int n,i,r;
printf("enter the number of employees:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter employee designation: ");
scanf("%s",s[i].edes);
printf("enter employee name:");
scanf("%s", s[i].ename);
printf("enter employee salary: ");
scanf("%d",&s[i].esalary);
}
for(i=0;i<n;i++){
if(r=strcmp(s[i].edes,"manager")==0){
s[i].esalary=s[i].esalary + 0.2*s[i].esalary;
}
if(r=strcmp(s[i].edes,"accountant")==0){
s[i].esalary=s[i].esalary + 0.15*s[i].esalary;
}
else{
s[i].esalary=s[i].esalary + 0.1*s[i].esalary;
}
}
printf("NAME \t DESIGNATION \t SALARY \n");
for(i=0;i<n;i++){
printf("%s  \t  %s  \t %d  \n",s[i].ename,s[i].edes,s[i].esalary);
}
return 0;
}

