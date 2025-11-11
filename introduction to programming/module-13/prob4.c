#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star=65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 65; j <= star; j++)
        {
            printf("%c ", j);
         }
        
        



        star++;
        printf("\n");
    }
    
    



    return 0;   

     }