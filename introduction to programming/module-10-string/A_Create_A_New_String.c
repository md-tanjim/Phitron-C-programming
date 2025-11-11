#include <stdio.h>
int main()
{
    char s[1000];
    char s2[1000];
    
     scanf("%s", &s);
     int l = strlen(s);
     printf("%d ", l);

     scanf("%s", &s2);
     int l2 = strlen(s2);
     
     printf("%d ", l2);
     printf("\n");
     printf("%s ", s);
     printf("%s ", s2);

     

       

    

    return 0;
}