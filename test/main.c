#include <stdio.h>
#include <stdlib.h>
#include "stl.h"

int main(int argc, char** argv)
{
    Model* m;

    printf("opening file... ");
    m = stl_open("3DBenchy.stl");
    if (m == NULL)
    {
        printf("failed\n");
        return 1;
    }
    printf("ok\n");

    stl_delete(m);

    return 0;
}
