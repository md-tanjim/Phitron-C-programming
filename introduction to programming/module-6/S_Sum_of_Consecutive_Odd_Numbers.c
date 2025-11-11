#include <stdio.h>
int main()
{

    int n, a, b;

    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        long long int s = 0; // the var s in here bcs it needs to be reset after a print again and again and it solves the previous_sum_holding problem
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0)
        {
            printf("0\n");
        }

        if (a < b)
        {
            for (int i = a + 1; i < b; i++)
            {

                int f = i % 2;
                if (f != 0)
                {

                    s += i;
                }
            }
            printf("%lld\n", s);
        }

        else if (a > b)
        {
            for (int i = b + 1; i < a; i++)
            {

                int f = i % 2;
                if (f != 0)
                {

                    s += i;
                }
            }
            printf("%lld\n", s);
        }

    } // 1st for loop

    return 0;
}