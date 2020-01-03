#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdint.h>
#include "vec3.h"

typedef struct _Triangle
{
    vec3 normal;
    vec3 verts[3];
    uint16_t attr;
} Triangle;

void triangle_gen(Triangle*, float[12], uint16_t);

#endif /* TRIANGLE_H */
