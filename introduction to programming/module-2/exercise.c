#include <stdio.h>
int main()
{
  // Take a number from user and check if its a even number or odd number
  int x, y=2;
  scanf("%d", &x);


  if (x%y ==0 )
  {
    printf("it is an even number\n");
  }
   else if( x%y != 0){
   
    printf("it is an odd number\n");
   }

    //Take a number from user and check if its a positive or negative number.

    int input;
    scanf("%d", &input);
    if (input > 0)
    {printf("it is a positive number"); }
     else if(input < 0)
     {printf("its a negetive number");}



   









   return 0;
}