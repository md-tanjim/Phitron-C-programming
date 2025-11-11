#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int star= n;
   int space = 0;
   for (int i = 0; i <n; i++)
   {
    for (int m = 0; m<space; m++)
       {
         printf(" ");
         
       }
    for (int j = 1; j <= star; j++)
    {   
       
       
        printf("$");
        //printf(" ");
    }
    printf("\n");
    star--;
    space++;
    


    
   }
    



    return 0;
}