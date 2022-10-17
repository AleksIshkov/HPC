#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include"prototype.h"


int main(void)
{
    int N_matr_size = 6, NRuns = 1;
    int N;
    int matr_sizes[] = {500, 512, 1000, 1024, 2000, 2048};

    double *A, *B, *C, time;

    printf("Time for every N and alg\n");
    printf("mul order |");
    for (int i = 0; i < N_matr_size; i++)
            printf("%10d |", matr_sizes[i]);
    printf("\n");
    printf("-----------------------------------------------------------------------------------\n");

    printf("ijk order |");
    for (int j = 0; j < N_matr_size; j++)
    {
        N = matr_sizes[j];
        A = (double *) malloc(N * N * sizeof(double));
        B = (double *) malloc(N * N * sizeof(double));
        C = (double *) malloc(N * N * sizeof(double));
        init_matrix(A, N);
        init_matrix(B, N);
        zero_matrix(C, N);

        time = 0.0;
        for (int i = 0; i < NRuns; i++)
            time += Matr_mul_ijk(A, B, C, N) / NRuns;
        printf("%10.6f |", time);

        free(A); 
        free(B);
        free(C);
    }
    printf("\n");

    printf("jik order |");
    for (int j = 0; j < N_matr_size; j++)
    {
        N = matr_sizes[j];
        A = (double *) malloc(N * N * sizeof(double));
        B = (double *) malloc(N * N * sizeof(double));
        C = (double *) malloc(N * N * sizeof(double));
        init_matrix(A, N);
        init_matrix(B, N);
        zero_matrix(C, N);

        time = 0.0;
        for (int i = 0; i < NRuns; i++)
            time += Matr_mul_jik(A, B, C, N) / NRuns;
        printf("%10.6f |", time);

        free(A); 
        free(B);
        free(C);
    }
    printf("\n");

    printf("kij order |");
    for (int j = 0; j < N_matr_size; j++)
    {
        N = matr_sizes[j];
        A = (double *) malloc(N * N * sizeof(double));
        B = (double *) malloc(N * N * sizeof(double));
        C = (double *) malloc(N * N * sizeof(double));
        init_matrix(A, N);
        init_matrix(B, N);
        zero_matrix(C, N);

        time = 0.0;
        for (int i = 0; i < NRuns; i++)
            time += Matr_mul_kij(A, B, C, N) / NRuns;
        printf("%10.6f |", time);

        free(A); 
        free(B);
        free(C);
    }
    printf("\n");
    
    return 0;
}