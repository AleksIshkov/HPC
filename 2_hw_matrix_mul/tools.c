#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include"prototype.h"


double func(int i, int j){
    return (-2) * (fabs (i - j) + 1); 
}

double func_1_arg(int i){
    return (-2) * (i + 1); 
}

void init_matrix(double *A, int N){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[i * N + j] = func(i, j);
}

void zero_matrix(double *A, int N){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            A[i * N + j] = 0.0;
}

void init_vector(double *A, int N){
    for (int i = 0; i < N; i++)
        A[i] = func_1_arg(i);
}

void zero_vector(double *A, int N){
    for(int i = 0; i < N; i++)
         A[i] = 0.0;
}