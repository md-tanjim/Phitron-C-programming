#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", &s);

    int l = strlen(s);

    for (int i = 0; i < l; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] < 97) // cap to small
        {
            s[i] = s[i] + 32;
        }
        else if (s[i] > 97) // small to cap
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] == 97)
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] == 65)
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s", s);

    return 0;
}