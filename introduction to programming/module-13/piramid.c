#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int star= 0;
   int space = n;
   for (int i = 0; i <n; i++)
   {
    for (int m = 1; m<space; m++)
       {
         printf(" ");
         
       }
    for (int j = 0; j <= star; j++)
    {   
       
       
        printf("*");
    }
    printf("\n");
    star+=2;
    space--;
    


    
   }
    



    return 0;
}