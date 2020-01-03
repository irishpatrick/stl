#ifndef MODEL_H
#define MODEL_H

#include <stdint.h>
#include "triangle.h"

typedef struct _Model
{
    uint32_t triangles;
    Triangle* data;
} Model;

#endif /* MODEL_H */
