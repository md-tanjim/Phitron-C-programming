#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int min = INT_MAX, max = INT_MIN;
    int index_max, index_min;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            index_max = i;
        }
        if (a[i] == min)
        {
            index_min = i;
        }
    }

    a[index_max] = min;
    a[index_min] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}