#include <stdio.h>

int main(void)
{
    char arr[100];
    int n = 0;
    int asize = 0;

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
        if(arr[i] == 'c' && i < asize-1)
        {
            if(arr[i+1] == '=' || arr[i+1] == '-')
            {
                i++;
            }
        }
        if(arr[i] == 'd' && i < asize - 2)
        {
            if(arr[i+1] == 'z' && arr[i+2] == '=')
            {
                i += 2;
            }
        }
        if(arr[i] == 'd' && i < asize - 1)
        {
            if(arr[i+1] == '-')
            {
                i++;
            }
        }
        if(arr[i] == 'l' && i < asize - 1)
        {
            if(arr[i+1] == 'j')
            {
                i++;
            }
        }
        if(arr[i] == 'n' && i < asize - 1)
        {
            if(arr[i+1] == 'j')
            {
                i++;
            }
        }
        if(arr[i] == 's' && i < asize - 1)
        {
            if(arr[i+1] == '=')
            {
                i++;
            }
        }
        if(arr[i] == 'z' && i < asize - 1)
        {
            if(arr[i+1] == '=')
            {
                i++;
            }
        }
        n++;
    }

    printf("%d", n);

    return 0;
}