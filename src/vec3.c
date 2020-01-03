#include "vec3.h"
#include <math.h>

vec3 vec3_normalize(vec3 v)
{
    vec3 out;
    float mag = vec3_magnitude(v);

    if (mag != 0)
    {
        out.x = v.x / mag;
        out.y = v.y / mag;
        out.z = v.z / mag;
    }

    return out;
}

float vec3_magnitude(vec3 v)
{
    return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

vec3 vec3_add(vec3 a, vec3 b)
{
    vec3 out;
    
    out.x = a.x + b.x;
    out.y = a.y + b.y;
    out.z = a.z + b.z;

    return out;
}

vec3 vec3_sub(vec3 a, vec3 b)
{
    vec3 out;
    
    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;

    return out;
}

float vec3_dot(vec3 a, vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

vec3 vec3_scale(vec3 v, float s)
{
    vec3 out;

    out.x = v.x * s;
    out.y = v.y * s;
    out.z = v.z * s;

    return out;
}

vec3 vec3_proj(vec3 v, vec3 d)
{
    vec3 out;
    float s;

    s = vec3_dot(v, d) / vec3_dot(d, d);
    out = vec3_scale(d, s);

    return out;    
}

vec3 vec3_cross(vec3 a, vec3 b)
{
    vec3 out;

    out.x = a.y * b.z - a.z * b.y;
    out.y = -1 * (a.x * b.z - a.z * b.x);
    out.z = a.x * b.y - b.x * a.y;

    return out;
}