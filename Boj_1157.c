#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int asize = 0;
    int alpha[26] = {0};
    int chg = 0;
    int max = 0;
    int check = 0;
    char arr[1000000];
    
    scanf("%s", arr);

    while(1)
    {
        if(arr[asize] == '\0')
        {
            break;
        }
        asize++;
    }

    for(int i = 0; i<asize; i++)
    {
        chg = (int)arr[i];
        
        for(int j = 0; j<26; j++)
        {
            if(chg == 65 + j || chg == 97 + j)
            {
                alpha[j]++;
            }
        }
    }

    for(int k = 1; k<26; k++)
    {
        if(alpha[k] > alpha[max])
        {
            max = k;
        }
    }
    for(int h = 0; h<26; h++)
    {
        if(alpha[max] == alpha[h])
        {
            check++;
        }
    }

    if(check > 1)
    {
        printf("?");
    }
    else if(check == 1)
    {
        printf("%c", (char)(max+65));
    }

    return 0;

}