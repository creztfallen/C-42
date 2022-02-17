#include <stdio.h>

int main(void)
{
    int var = 87;
    int *pt;
    int show;

    pt = &var;
    show = *pt;

    printf("%d", show);

    return (0);
}
