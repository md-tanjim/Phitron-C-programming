#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n - 1;
    // int minus=3;

    if (n % 2 == 0)
    {
        if (hash < (n * 2) - 1)
        {
            for (int i = 0; i < n / 2 /*(n*2)-1*/; i++)
            {
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("#");
                }

                hash += 2;
                space--;
                printf("\n");
                // print --
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("-");
                }
                printf("\n");
                hash += 2;
                space--;
            }
        }

        //    printf("%d", hash);

        if (hash >= (n * 2) - 1)
        {
            space += 2;
            hash -= 4;

            for (int i = 0; i <= n / 2 /*(n*2)-1*/; i++)
            {
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("#");
                }

                hash -= 2;
                space++;
                printf("\n");
                // print --
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("-");
                }
                printf("\n");
                hash -= 2;
                space++;
            }
        }
    }

    //--------------------------------

    else if (n % 2 != 0)
    {

        if (hash < (n * 2) - 1)
        {
            for (int i = 0; i < n / 2 /*(n*2)-1*/; i++)
            {
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("#");
                }

                hash += 2;
                space--;
                printf("\n");
                // print --
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("-");
                }
                printf("\n");
                hash += 2;
                space--;
            }
        }

        //    printf("%d", hash);

        if (hash >= (n * 2) - 1)
        {
            //  space+=2;
            // hash-=4;

            for (int i = 0; i <= n / 2 /*(n*2)-1*/; i++)
            {
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("#");
                }

                hash -= 2;
                space++;
                printf("\n");
                // print --
                for (int m = 0; m < space; m++)
                {
                    printf(" ");
                }
                for (int i = 0; i < hash; i++)
                {
                    printf("-");
                }
                printf("\n");
                hash -= 2;
                space++;
            }
        }
    }

    return 0;
}
