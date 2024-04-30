#include<stdio.h>
typedef struct bookstore{
    char title[100];
    char author[30];
    int publication_date;
    int price;
}var;
int main(){
    var s[100],t;
    int n,i,j;
    printf("enter the number of books: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter title of book: ");
        scanf("%s",s[i].title);
        printf("enter author's name: ");
        scanf("%s",s[i].author);
        printf("enter date of publication: ");
        scanf("%d",&s[i].publication_date);
        printf("enter the price of book: ");
        scanf("%d",&s[i].price);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[i].price>s[j].price){
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    printf("Title \t Author Name \t Date of publication \t Price \n");
    for(i=0;i<n;i++){
        printf("%s \t %s \t %d \t %d \n",s[i].title,s[i].author,s[i].publication_date,s[i].price);
    }
    return 0;
}