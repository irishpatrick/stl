#include "core.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

Model* stl_open(const char* fn)
{
    FILE* fp = fopen(fn, "rb");
    if (fp == NULL)
    {
        return NULL;
    }

    Model* model = (Model*)malloc(sizeof(Model));
    if (model == NULL)
    {
        return NULL;
    }

    char header[80];
    
    size_t in;

    fread(header, 1, 80, fp);
    
    fread(&model->triangles, sizeof(uint32_t), 1, fp);
    model->data = (Triangle*)malloc(model->triangles * sizeof(Triangle));

    int i;
    for (i = 0; i < model->triangles; i++)
    {
        float data[12];
        uint16_t attr;

        fread(data, sizeof(float), 12, fp);
        fread(&attr, sizeof(uint16_t), 1, fp);

        triangle_gen(&model->data[i], data, attr);
    }

    return model;
}

void stl_delete(Model* m)
{
    if (m == NULL)
    {
        return;
    }

    free(m);
}
