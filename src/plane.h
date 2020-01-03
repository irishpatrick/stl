#ifndef PLANE_H
#define PLANE_H

#include "vec3.h"
#include "line.h"

typedef struct _Plane
{
    vec3 points[3];
    vec3 normal;
} Plane;

void plane_gen(Plane*, vec3[3]);
vec3 plane_solve_line(Plane*, Line*);
Line plane_solve_plane(Plane*, Plane*);
#endif /* PLANE_H */