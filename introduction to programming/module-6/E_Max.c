#include <stdio.h>
#include <limits.h>
int main(){
   int input1,input2;
   int max= INT_MIN;
   scanf("%d", &input1);
   for (int i = 1; i <=input1; i++)
   {
    scanf("%d", &input2);
    if (input2>max)
    {
        max = input2;
    }
    
   }
    printf("%d", max);



    return 0;
}