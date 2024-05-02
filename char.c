#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct contact_list{
    char name[100];
    int phno;
    char email[100];
    char address[100];
}var;
void add(var s,var q[],int m){
    int i;
    printf("enter the name: ");
    scanf("%s",s.name);
    printf("enter the phone number: ");
    scanf("%d",&s.phno);
    printf("enter the email address: ");
    scanf("%s",s.email);
    printf("enter the home address: ");
    scanf("%s",s.home);
    printf("NAME\tPHONE NO\tEMAIL\tADDRESS\n");
    for(i=0;i<m;i++){
        printf("%s\t%d\t%s\t%s",q[i].name,q[i].phno,q[i].email,q[i].address);
    }
    printf("%s\t%d\t%s\t%s",s.name,s.phno,s.email,s.address);
}
void display(var s[],int p){
    char n[100];
    printf("enter the name of the contact whose information is to be displayed: ");
    scanf("%s",n);
    for(int i=0;i<p;i++){
        if(stcmp(s[i].name,n)==0){
            printf("NAME\tPHONE NO\tEMAIL\tADDRESS\n");
            printf("%s\t%d\t%s\t%s",s[i].name,s[i].phno,s[i].email,s[i].address);
            exit(0);
        }
    }
}
int main(){
    int n,i,ch;
    printf("enter the number of contacts: ");
    scanf("%d",&n);
    var c[n],s1;
    for(i=0;i<n;i++){
    printf("enter the name: ");
    scanf("%s",s.name);
    printf("enter the phone number: ");
    scanf("%d",&s.phno);
    printf("enter the email address: ");
    scanf("%s",s.email);
    printf("enter the home address: ");
    scanf("%s",s.home);
    }
    printf("SELECT A CHOICE \n 1. ADD A MEMBER \n 2.SEARCH FOR DISPLAY \n");
    scanf("%d",&ch);
    if(ch==1){
        add(s1,c,n);
        exit(0);
    }
    if(ch==2){
        display(c,n);
        exit(0);
    }
    else{
        printf("invalid choice: ");
        exit(0);
    }
    return 0;

}