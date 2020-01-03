#include "plane.h"

void plane_gen(Plane* p, vec3 pts[3])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        p->points[i] = pts[i];
    }

    vec3 a = vec3_sub(pts[0], pts[1]);
    vec3 b = vec3_sub(pts[1], pts[2]);
    p->normal = vec3_normalize(vec3_cross(a, b));
}

vec3 plane_solve_line(Plane* p, Line* l)
{
    vec3 out;


    
    return out;
}

Line plane_solve_plane(Plane* a, Plane* b)
{
    Line out;



    return out;
}