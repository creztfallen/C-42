#include <unistd.h>

void only_c(void)
{
    write(1, "c", 1);
};

// int main(void)
// {
//     only_c();
//     return (0);
// }
