#include <stdio.h>
int main(){
   char a;
   scanf("%c", &a);
   //printf("%d", a);
   int b =a;
   if (b==122)
   {
    printf("%c", b-25);
   }
   else{
    int b =a;
    b=b+1;
   printf("%c", b);
   }

    return 0;
}