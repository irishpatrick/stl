#ifndef VEC3_H
#define VEC3_H

typedef struct _vec3
{
    float x;
    float y;
    float z;
} vec3;

vec3 vec3_normalize(vec3);
float vec3_magnitude(vec3);

vec3 vec3_add(vec3, vec3);
vec3 vec3_sub(vec3, vec3);
float vec3_dot(vec3, vec3);
vec3 vec3_scale(vec3, float);
vec3 vec3_proj(vec3, vec3);

#endif /* VEC3_H */
