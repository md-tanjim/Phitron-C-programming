#include <stdio.h>
int main()
{ 
      
    // int n;
    // scanf("%d", &n);

    // if (n >= 1000)
    // {
    //     printf("I will buy Punjabi\n");
    // }
    // else{
    //     printf("Bad luck!\n");
    // }

    // int sub = n-1000;

    // if(sub >= 500)
    // {
    //     printf("I will buy new shoes\n");
    //     printf("Alisa will buy new shoes\n");
    // }
       
    //divisible by 3 and 7

    int m,i;
    scanf("%d", &m);
    for(i=1; i<=m;i++)
    { 
      if(i%3 == 0 && i%7==0){
        printf("%d\n",i);
      }
      
    }







return 0;
}