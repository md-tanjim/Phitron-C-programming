#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[101];
        scanf("%s", a);
        
        int l = strlen(a);

       
            if (l <= 10)
            {
                printf("%s\n", a);
                
            }

            else 
            {
                printf("%c%d%c\n", a[0], l - 2, a[l - 1]);
               
            }
        
    }

    return 0;
}