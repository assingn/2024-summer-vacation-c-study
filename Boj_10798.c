#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[5][16] = {0};
    int lengths[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        scanf("%15s", arr[i]);
        lengths[i] = strlen(arr[i]);
    }

    for (int k = 0; k < 16; k++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (k < lengths[j]) //이 조건이 중요**
            {
                printf("%c", arr[j][k]);
            }
        }
    }

    return 0;
}