#ifndef LINE_H
#define LINE_H

#include "vec3.h"

typedef struct _Line
{
    vec3 p;
    vec3 d;
} Line;

vec3 line_solve(Line*, float);

#endif /* LINE_H */