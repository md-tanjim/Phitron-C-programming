#include <stdio.h>
int main(){
   char c;
   scanf("%c", &c);

      if(c<=57){
    printf("IS DIGIT");
      }
      else
      {
       if(c>=65 && c<97){
        printf("ALPHA\n");
        printf("IS CAPITAL");
      }
      else if (c>=65 && c>=97)
      {
        printf("ALPHA\n");
        printf("SMALL");
      }
      }
    return 0;
}