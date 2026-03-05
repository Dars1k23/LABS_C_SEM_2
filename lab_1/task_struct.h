#ifndef TASK_SRUCT_H
#define TASK_SRUCT_H

typedef struct{
    int len;
    long double *data;
} Line;

typedef struct{
    int m;
    Line *lines;
} Matrix;

typedef struct{
    long double *data;
    int size;
    int cap;
} Vector;

#endif
