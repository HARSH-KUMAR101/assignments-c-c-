#include<stdio.h>
#include<conio.h>
int main(){
    int day,month,year;
  printf("enter the date in format of dd/mm/yyyy: ");
  scanf("%d/%d/%d",&day,&month,&year);
  printf("%d day %d month %d year",day,month,year);
  return 0;
}

