#include <unistd.h>

void main(void)
{
    char *i;

    i = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, i, 58);

    return(1);

}