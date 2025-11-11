#include <stdio.h>
int stocap(int num)
{ 
  int cap= num -32;
  
return(cap);
}
int main(){
   char c;
   scanf("%c", &c);

  int a = stocap(c);
   printf("%c", a);


    return 0;
}