#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        
 
        char a[60], b[60];
        scanf("%s %s", a, b);
        int la = strlen(a);
        int lb = strlen(b);
 
        if (la > lb)
        {
            for (int i = 0; i < la; i++)
            {
                if (a[i] == '\0' || b[i] == '\0')
                {
                    printf("%c", a[i]);
                }
                else
                {
                    printf("%c%c", a[i], b[i]);
                }
 
                // printf("%c%c", a[i],b[i]);
            }
        }
 
        else if (lb > la)
        {
            for (int i = 0; i < lb; i++)
            {
                if (a[i] == '\0' || b[i] == '\0')
                {
                    printf("%c", b[i]);
                }
                else
                {
                    printf("%c%c", a[i], b[i]);
                }
 
                // printf("%c%c", a[i],b[i]);
            }
        }
 
        else
        {
            for (int i = 0; i < la; i++)
            {
                printf("%c%c", a[i], b[i]);
            }
        }
        printf("\n");
    }
 
    return 0;
}