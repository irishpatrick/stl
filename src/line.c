#include "line.h"

vec3 line_solve(Line* l, float t)
{
    vec3 out;

    out.x = l->p.x + l->d.x * t;
    out.y = l->p.y + l->d.y * t;
    out.z = l->p.z + l->d.z * t;

    return out;
}