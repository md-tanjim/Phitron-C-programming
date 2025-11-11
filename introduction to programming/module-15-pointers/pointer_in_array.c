#include <stdio.h>
int main(){
   int a[5]= {10,20,30,40,50};
   printf("%p\n", &a[0]); 
   printf("%p\n", &a[1]); 
   printf("%p\n", &a[2]); 
   printf("%p\n", &a[3]); 
   printf("%p\n", &a[4]); 

   printf("%p\n", a);
   printf("%d\n", *a);

   *a = 1000;
   *(a+1) = 2000;
   printf("%d\n", *a);
   printf("%d", a[1]);




    return 0;
}