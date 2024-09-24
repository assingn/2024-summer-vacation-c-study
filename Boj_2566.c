#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **arr = (int**)malloc(9*sizeof(int*));

    for(int k = 0; k<9; k++)
    {
        arr[k] = (int*)malloc(9*sizeof(int));
    }

    int row = 1;
    int column = 1;
    int max = 0;

    for(int i = 0; i<9; i++)
    {
        for(int j = 0; j<9; j++)
        {
            scanf("%d", &arr[i][j]);

            if(max < arr[i][j])
            {
                row = i+1;
                column = j+1;
                max = arr[i][j];
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", row, column);

    for(int h = 0; h<9; h++)
    {
        free(arr[h]);
    }
    free(arr);

    return 0;
}