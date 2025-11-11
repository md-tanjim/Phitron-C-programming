#include <stdio.h>
int main()
{ int i = 122;
  float f = 100.312340;
  char  c = '$';

  int i2;
  float f2;
  char c2;
    
    printf("%d\n",i);
    printf("%.6f\n",f);
    printf("%c\n",c);


    scanf("%d %f %c", &i2, &f2, &c2);
    printf("%d\n %f\n %c\n", i2,f2,c2);

    // //intiger limit---->10^9; long long int limit---> 10^18 
    //   float limit--->100; double limit--->10^9   
     
    long long int iL = 10000000000000000;
    double fL = 1000000000.123456;
    printf("%lld \n %lf", iL, fL );

    



    return 0;
}