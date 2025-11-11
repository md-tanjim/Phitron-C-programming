#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);
      int star=n;

   for (int i = 0; i < n; i++)
   {
    for (int j = i+1; j <= star; j++)
    {
        printf("*");
       // printf("%d %d\n", i,j);

    }
    
    printf("\n");
    
   }
   
    



    return 0;
}