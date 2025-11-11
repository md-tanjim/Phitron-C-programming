#include <stdio.h>

void fun(int x)
{ int y=20;
  printf("it is fun %p\n", &y);
}


int main(){
  int x=10;
  printf("%p\n", &x);
  fun(x);  



    return 0;
}