#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int num = 0;
    int check = 0;
    int alpha[26] = {0};

    scanf("%d", &n);

    char **data = (char**)malloc(n*sizeof(char*));
    
    for(int h=0; h<n; h++)
    {
        data[h] = (char*)malloc(100*sizeof(char));
    }

    int *asize = (int*)malloc(n*sizeof(int));

    for(int b = 0; b<n; b++)
    {
        asize[b] = 0;
    }

    for(int i = 0; i< n; i++)
    {
        scanf("%s", data[i]);
    }

    for(int j = 0; j<n; j++)
    {
        check = 0;
        for(int a = 0; a<26; a++)
        {
            alpha[a] = 0;
        }

        while(1)
        {
            if(data[j][asize[j]] == '\0')
            {
                break;
            }
            asize[j]++;
        }

        for(int k = 0; k<asize[j]; k++)
        {
            if(alpha[((int)data[j][k])-97] >= 1)
            {
                if(data[j][k] != data[j][k-1])
                {
                    check++;
                }
                else
                {
                    alpha[((int)data[j][k])-97]++;                    
                }
            }
            else if(alpha[((int)data[j][k])-97] == 0)
            {
                alpha[((int)data[j][k])-97]++;
            }
        }

        if(check == 0)
        {
            num++;
        }
    }

    printf("%d", num);

    for(int c = 0; c<n; c++)
    {
        free(data[c]);
    }

    free(data);
    free(asize);

    return 0;
}