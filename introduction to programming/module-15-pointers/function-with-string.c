#include <stdio.h>

 void fun(char s[])
   {
    printf("%s", s);
   } 
int main(){
  
    char s[20];
    scanf("%s", s);
    fun(s);



    return 0;
}