#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"prototype.h"


double Matr_vec_mul_ij(double * A, double * B, double * C, int N)
{
    double time;
    int i, j, k;

    time = clock();
    
    for (i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            C[i] = C[i] + A[i * N + j] * B[j];

    time = clock() - time;
    
    return time / CLOCKS_PER_SEC;
}

double Matr_mul_ji(double * A, double * B, double * C, int N)
{
    double time;
    int i, j, k;

    time = clock();
    
    for (j = 0; j < N; j++)
        for(i = 0; i < N; i++)
            C[i] = C[i] + A[i * N + j] * B[j];

    time = clock() - time;
    
    return time / CLOCKS_PER_SEC;
}