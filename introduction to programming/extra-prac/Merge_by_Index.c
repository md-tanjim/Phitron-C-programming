#include <stdio.h>
int main(){
   char a[1001];
   char b[1001];
   int st, end;
   
   scanf("%s %s", a,b);
   scanf("%d %d", &st,&end);

   printf("%s", a);
   for (int i = st; i <= end; i++)
   {
    printf("%c", b[i]);
   }
   


    return 0;
}