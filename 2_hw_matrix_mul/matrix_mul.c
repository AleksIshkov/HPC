#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"prototype.h"


double Matr_mul_ijk(double * A, double * B, double * C, int N)
{
    double time;
    int i, j, k;

    time = clock();
    
    for (i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            for(k = 0; k < N; k++)
                C[i * N + j] = C[i * N + j] + A[i * N + k] * B[k * N + j];

    time = clock() - time;
    
    return time / CLOCKS_PER_SEC;
}

double Matr_mul_jik(double * A, double * B, double * C, int N)
{
    double time;
    int i, j, k;

    time = clock();
    
    for (j = 0; j < N; j++)
        for(i = 0; i < N; i++)
            for(k = 0; k < N; k++)
                C[i * N + j] = C[i * N + j] + A[i * N + k] * B[k * N + j];

    time = clock() - time;
    
    return time / CLOCKS_PER_SEC;
}

double Matr_mul_kij(double * A, double * B, double * C, int N)
{
    double time;
    int i, j, k;

    time = clock();
    
    for (k = 0; k < N; k++)
        for(i = 0; i < N; i++)
            for(j = 0; j < N; j++)
                C[i * N + j] = C[i * N + j] + A[i * N + k] * B[k * N + j];
                
    time = clock() - time;
    
    return time / CLOCKS_PER_SEC;
}