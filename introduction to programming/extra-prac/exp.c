#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);

   for (int i = 0,j =n-1; i < n,j >=0; i++,j--)
        {
          
          printf("%d %d\n", i,j);

        }
   



    return 0;
}