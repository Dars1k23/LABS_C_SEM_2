#include <stdio.h>
#include <stdlib.h>
#include "task_struct.h"

int search_max_c(long double *data, int len){
    int max = data[0];
    for (int i = 0; i < len; i++){
        if (data[i] > max){
            max = data[i];
        }
    }
    return max;
}

Vector* init_vector(Matrix* matr){
    Vector* vec = malloc(sizeof(Vector));
    vec->size = 0;
    vec->cap = matr->m;
    vec->data = malloc(vec->cap * sizeof(long double));
    for (int i = 0; i < matr->m; i++){
        long long num = 0;
        for (int j = 0; j < matr->lines[i].len; j++){
            num += matr->lines[i].data[j];
        }
        long double midl_c = num / matr->lines[i].len;
        long double max_c = search_max_c(matr->lines[i].data, matr->lines[i].len);
        long double b = midl_c / max_c;
        vec->data[i] = b;
        vec->size++;
    }
    return vec;
}

void print_vector(Vector* vec){
    for (int i = 0; i < vec->size; i++){
        printf("%Lf ", vec->data[i]);
    }
    printf("\n");
}

void free_vector(Vector* vec){
    free(vec->data);
    free(vec);
}
