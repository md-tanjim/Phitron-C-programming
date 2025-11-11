#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float m1,m2,d;
        scanf("%f %f %f", &m1,&m2,&d);

       float res = (m1 * d) / (m1+m2);
       int r= res;
       int re = d - r;
       
         
        printf("%d\n", re);
        
    }
    

    



    return 0;
}