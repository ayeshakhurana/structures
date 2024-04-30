/*define a structure car with members like car ID ,model name and price sort them with respect to their price*/ 
#include<stdio.h>
struct car{
    int car_id;
    char model[100];
    int price;
};
int main(){
    int n;
    printf("enter number of cars: ");
    scanf("%d",&n);
    struct car s[n],t;
    int i,j;
    printf("enter the details:\n ");
    for(i=0;i<n;i++){
        printf("enter car ID: ");
        scanf("%d",&s[i].car_id);
        printf("enter model of the car: ");
        scanf("%s",s[i].model);
        printf("enter the price of the car: ");
        scanf("%d",&s[i].price);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[i].price > s[j].price){
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    printf("CAR ID \t  MODEL  \t  PRICE \n");
    for(i=0;i<n;i++){
        printf("%d  \t  %s  \t  %d\n",s[i].car_id,s[i].model,s[i].price);
    }
    return 0;

}