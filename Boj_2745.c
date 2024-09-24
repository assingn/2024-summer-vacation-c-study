#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char arr[100];
    int asize = 0;
    int jin = 0;
    int chg = 0; //이진수 변환에 쓰일 변수
    int count = 0; //이진수 변환에 쓰일 변수
    long long result = 0;
    int ten_jin = 1; //십진수 변환에 쓰일 변수

    scanf("%s %d", arr, &jin);
    asize = strlen(arr);

    if(jin > 32)
    {
        int **rslt = (int**)malloc(asize*sizeof(int*)); //변환할 이진수를 저장할 배열
        for(int i = 0; i<asize; i++)
        {
            rslt[i] = (int*)malloc(6*sizeof(int));
        }
        for(int j = 0; j<asize; j++)
        {
            count = 0;
            if((int)arr[j] >= 48 && (int)arr[j] <= 57)
            {
                chg = (int)arr[j]-48;
                while(1)
                {
                    rslt[j][5-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 5-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
            else if((int)arr[j] >= 65 && (int)arr[j] <= 90)
            {
                chg = (int)arr[j]-55;
                while(1)
                {
                    rslt[j][5-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 5-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
        }
        for(int a = asize-1; a>= 0; a--)
        {
            for(int b = 5; b >= 0; b--)
            {
                result += ten_jin*rslt[a][b];
                ten_jin *= 2;
            }
        }
    }
    else if(jin > 16)
    {
        int **rslt = (int**)malloc(asize*sizeof(int*)); //변환할 이진수를 저장할 배열
        for(int i = 0; i<asize; i++)
        {
            rslt[i] = (int*)malloc(5*sizeof(int));
        }
        for(int j = 0; j<asize; j++)
        {
            count = 0;
            if((int)arr[j] >= 48 && (int)arr[j] <= 57)
            {
                chg = (int)arr[j]-48;
                while(1)
                {
                    rslt[j][4-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 4-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
            else if((int)arr[j] >= 65 && (int)arr[j] <= 90)
            {
                chg = (int)arr[j]-55;
                while(1)
                {
                    rslt[j][4-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 4-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
        }
        for(int a = asize-1; a>= 0; a--)
        {
            for(int b = 4; b >= 0; b--)
            {
                result += ten_jin*rslt[a][b];
                ten_jin *= 2;
            }
        }
    }
    else if(jin > 8)
    {
        int **rslt = (int**)malloc(asize*sizeof(int*)); //변환할 이진수를 저장할 배열
        for(int i = 0; i<asize; i++)
        {
            rslt[i] = (int*)malloc(4*sizeof(int));
        }
        for(int j = 0; j<asize; j++)
        {
            count = 0;
            if((int)arr[j] >= 48 && (int)arr[j] <= 57)
            {
                chg = (int)arr[j]-48;
                while(1)
                {
                    rslt[j][3-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 3-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
            else if((int)arr[j] >= 65 && (int)arr[j] <= 90)
            {
                chg = (int)arr[j]-55;
                while(1)
                {
                    rslt[j][3-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 3-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
        }
        for(int a = asize-1; a>= 0; a--)
        {
            for(int b = 3; b >= 0; b--)
            {
                result += ten_jin*rslt[a][b];
                ten_jin *= 2;
            }
        }
    }
    else if(jin > 4)
    {
        int **rslt = (int**)malloc(asize*sizeof(int*)); //변환할 이진수를 저장할 배열
        for(int i = 0; i<asize; i++)
        {
            rslt[i] = (int*)malloc(3*sizeof(int));
        }
        for(int j = 0; j<asize; j++)
        {
            count = 0;
            if((int)arr[j] >= 48 && (int)arr[j] <= 57)
            {
                chg = (int)arr[j]-48;
                while(1)
                {
                    rslt[j][2-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 2-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
            else if((int)arr[j] >= 65 && (int)arr[j] <= 90)
            {
                chg = (int)arr[j]-55;
                while(1)
                {
                    rslt[j][2-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 2-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
        }
        for(int a = asize-1; a>= 0; a--)
        {
            for(int b = 2; b >= 0; b--)
            {
                result += ten_jin*rslt[a][b];
                ten_jin *= 2;
            }
        }
    }
    else if(jin > 2)
    {
        int **rslt = (int**)malloc(asize*sizeof(int*)); //변환할 이진수를 저장할 배열
        for(int i = 0; i<asize; i++)
        {
            rslt[i] = (int*)malloc(2*sizeof(int));
        }
        for(int j = 0; j<asize; j++)
        {
            count = 0;
            if((int)arr[j] >= 48 && (int)arr[j] <= 57)
            {
                chg = (int)arr[j]-48;
                while(1)
                {
                    rslt[j][1-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 1-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
            else if((int)arr[j] >= 65 && (int)arr[j] <= 90)
            {
                chg = (int)arr[j]-55;
                while(1)
                {
                    rslt[j][1-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 1-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
        }
        for(int a = asize-1; a>= 0; a--)
        {
            for(int b = 1; b >= 0; b--)
            {
                result += ten_jin*rslt[a][b];
                ten_jin *= 2;
            }
        }
    }
    else if(jin == 2)
    {
        int **rslt = (int**)malloc(asize*sizeof(int*)); //변환할 이진수를 저장할 배열
        for(int i = 0; i<asize; i++)
        {
            rslt[i] = (int*)malloc(1*sizeof(int));
        }
        for(int j = 0; j<asize; j++)
        {
            count = 0;
            if((int)arr[j] >= 48 && (int)arr[j] <= 57)
            {
                chg = (int)arr[j]-48;
                while(1)
                {
                    rslt[j][0-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 0-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
            else if((int)arr[j] >= 65 && (int)arr[j] <= 90)
            {
                chg = (int)arr[j]-55;
                while(1)
                {
                    rslt[j][0-count] = chg % 2;
                    chg /= 2;
                    count++;
                    if(chg == 0)
                    {
                        break;
                    }
                }
                for(int k = 0-count; k >=0; k--)
                {
                    rslt[j][k] = 0;
                }
            }
        }
        for(int a = asize-1; a>= 0; a--)
        {
            for(int b = 0; b >= 0; b--)
            {
                result += ten_jin*rslt[a][b];
                ten_jin *= 2;
            }
        }
    }

    printf("%lld", result);

    return 0;

}