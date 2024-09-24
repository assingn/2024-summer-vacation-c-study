#include <stdio.h>

int main(void)
{
    int n = 0;
    int sum = 0;
    int x, y;
    int arr[101][101] = {0};

    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x <= 90 && y <= 90)
        {
            for(int j = x; j<x+10; j++)
            {
                for(int k = y; k<y+10; k++)
                {
                    if(arr[j][k] == 0)
                    {
                        arr[j][k] = 1;
                    }
                }
            }
        }
    }

    for(int a = 1; a<101; a++)
    {
        for(int b = 1; b<101; b++)
        {
            if(arr[a][b] == 1)
            {
                sum++;
            }
        }
    }

    printf("%d", sum);

    return 0;
}