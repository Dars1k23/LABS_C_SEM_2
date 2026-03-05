#ifndef TASK_MATRIX_H
#define TASK_MATRIX_H
#include "task_struct.h"

Matrix* create_matrix(int m);
void fill_matrix(Matrix* matr);
void print_matrix(Matrix* matr);
void free_matrix(Matrix* matr);

#endif
