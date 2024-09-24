#include <stdio.h>

struct score{
    char name[51];
    float hak;
    char peung[3];
};

int main(void)
{
    struct score SCORE[20];
    float num[20] = {0};
    float HAK = 0;
    float result = 0;

    for(int i = 0; i<20; i++)
    {
        scanf("%s %f %s", SCORE[i].name, &SCORE[i].hak, SCORE[i].peung);

        HAK += SCORE[i].hak;

        if(SCORE[i].peung[0] == 'A')
        {
            if(SCORE[i].peung[1] == '+')
            {
                num[i] = SCORE[i].hak * 4.5;
            }
            else if(SCORE[i].peung[1] == '0')
            {
                num[i] = SCORE[i].hak * 4.0;
            }
        }
        else if(SCORE[i].peung[0] == 'B')
        {
            if(SCORE[i].peung[1] == '+')
            {
                num[i] = SCORE[i].hak * 3.5;
            }
            else if(SCORE[i].peung[1] == '0')
            {
                num[i] = SCORE[i].hak * 3.0;
            }
        }
        else if(SCORE[i].peung[0] == 'C')
        {
            if(SCORE[i].peung[1] == '+')
            {
                num[i] = SCORE[i].hak * 2.5;
            }
            else if(SCORE[i].peung[1] == '0')
            {
                num[i] = SCORE[i].hak * 2.0;
            }
        }
        else if(SCORE[i].peung[0] == 'D')
        {
            if(SCORE[i].peung[1] == '+')
            {
                num[i] = SCORE[i].hak * 1.5;
            }
            else if(SCORE[i].peung[1] == '0')
            {
                num[i] = SCORE[i].hak * 1.0;
            }
        }
        else if(SCORE[i].peung[0] == 'F')
        {
            num[i] = SCORE[i].hak * 0.0;
        }
        if(SCORE[i].peung[0] == 'P')
        {
            HAK -= SCORE[i].hak;
            num[i] = 0;
        }
    }

    for(int j = 0; j<20; j++)
    {
        result += num[j];
    }
    result /= HAK;

    printf("%f", result);

    return 0;
}