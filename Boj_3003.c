#include <stdio.h>

int main(void)
{
    int king, queen, look, beshop, knight, phon;
    int a, b, c, d, e, f;

    scanf("%d %d %d %d %d %d", &king, &queen, &look, &beshop, &knight, &phon);

    a = 1 - king;
    b = 1 - queen;
    c = 2 - look;
    d = 2 - beshop;
    e = 2 - knight;
    f = 8 - phon;

    printf("%d %d %d %d %d %d", a, b, c, d, e, f);

    return 0;
}