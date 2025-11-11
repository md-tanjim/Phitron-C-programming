#include <stdio.h>
#include <string.h>

int main()
{
    char all[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char a[10001];
    scanf("%s", a);
    int l = strlen(a);
    for (int i = 0; i < 27; i++)
    {    int flag = 0;
       
        for (int j = 0; j < l; j++)
        {   
            if (all[i] == a[j])
            {    
                flag++;
                 
            }
        }

       
        

        if (flag!=0)
        { 
          printf("%c - ", all[i]);  
          printf("%d\n", flag);        }
        
    }

     

    return 0;
}