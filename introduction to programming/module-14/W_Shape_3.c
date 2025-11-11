#include <stdio.h>
int main(){
    
    
   int n;
   scanf("%d", &n);
   int star=0;
   for (int f = 0; f < 2; f++)
   {
    
   
   if (star <= (n*2)-1)
   {
    
   int space=n-1;
   for (int i = 0; i < n; i++)
   {
    for (int m = 0; m < space; m++)
    {
        printf(" ");
    }
    for (int j = 0; j <= star; j++)
    {
        printf("*");
    }
    star+=2;
    space--;
    printf("\n");
   }

   } //if
   
    else if (star>(n*2)-1)
    {
        int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int m = space; m > 0; m--)
        {
            printf(" ");
        }

        for (int j = star-1; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    }
    
    
   }


    return 0;
}




































// #include <stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);
//     int star = (n * 2) - 1;
//     int space = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int m = space; m > 0; m--)
//         {
//             printf(" ");
//         }

//         for (int j = star; j > 0; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star -= 2;
//         space++;
//     }

//     return 0;
// }