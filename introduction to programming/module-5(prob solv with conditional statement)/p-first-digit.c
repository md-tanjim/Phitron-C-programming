#include <stdio.h>
int main(){
   int a;
   scanf("%d", &a);
   int first=a/1000;
   if (first%2==0){
    printf("Even");
   }
   else if(first!=0){
    printf("Odd");
   }



    return 0;
}