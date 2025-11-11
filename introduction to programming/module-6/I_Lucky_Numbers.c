#include <stdio.h>
int main(){
   int a;
   scanf("%d", &a);
   int f=a%10;
   int s=a/10;

   if (f%s==0 || s%f==0)
   {
    printf("YES");
   }
   else{
    printf("NO");
   }
   
    



    return 0;
}