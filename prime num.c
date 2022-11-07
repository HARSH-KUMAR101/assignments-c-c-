#include<stdio.h>
#include<conio.h>
*int main(){
   int x,i;
     printf("enter the num");
     scanf("%d",&x);
       for(i=2;i<=x;i++){
        if(x%i==0){
            break;
        }
       }if(x==i){
         printf("%d is a prime",x);
       }else{
         printf("%d is not prime",x);
       }




}
