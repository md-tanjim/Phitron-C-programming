#include <stdio.h>
#include <string.h>
int main(){
   char s[1000001];
   int sum=0;
   
   scanf("%s", &s);
   int l = strlen(s);

   for (int i = 0; i < l; i++)
   {
    sum+=s[i]-48 ;
   }
   printf("%d", sum);


    return 0;
}