
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x;
        long long int f = 1;
        scanf("%d", &x);
        if (x == 0)
        {
            printf("1\n");
        }
        else
        {
            for (int j = 1; j <= x; j++)
            {
                f *= j;
            }
            printf("%lld\n", f);
        }

    } // else
    return 0;
}