#include <stdio.h>
int main(){
    int n;
    int star=1;
    scanf("%d", &n);
    if (star<=5)
    {
        for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <star; j++)
      {
        printf("$");
      }
      
       star++;
       printf("\n");
    }
    }
    if (star>n)
    {
        for (int i = n-1; i >=0; i--)
    {
      for (int j = star-3; j >=0; j--)
      {
        printf("$");
      }
      
       star--;
       printf("\n");
    }
    //printf("%d", star);
    }
    



    return 0;
}