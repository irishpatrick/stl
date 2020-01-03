#include "triangle.h"

void triangle_gen(Triangle* tri, float data[12], uint16_t attr)
{
    tri->attr = attr;

    tri->normal.x = data[0];
    tri->normal.y = data[1];
    tri->normal.z = data[2];

    tri->verts[0].x = data[3];
    tri->verts[0].x = data[4];
    tri->verts[0].x = data[5];

    tri->verts[1].x = data[6];
    tri->verts[1].x = data[7];
    tri->verts[1].x = data[8];

    tri->verts[2].x = data[9];
    tri->verts[2].x = data[10];
    tri->verts[2].x = data[11];
}
