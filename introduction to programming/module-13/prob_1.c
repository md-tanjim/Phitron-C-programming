#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int star= 0;
   int space = (n*2)-2;
   for (int i = 0; i <n; i++)
   {
    for (int m = 0; m<space; m++)
       {
         printf(" ");
         
       }
    for (int j = 0; j <= star; j++)
    {   
       
       
        printf("$ ");
        //printf(" ");
    }
    printf("\n");
    star++;
    space-=2;
    


    
   }
    



    return 0;
}