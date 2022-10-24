#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>
#include <omp.h>

int main(void)
{
    unsigned in_circle = 0;
    unsigned num_threads = 8;
    unsigned N = 100000000;

    omp_set_num_threads(num_threads);
    double _time = omp_get_wtime();

#pragma omp parallel reduction(+:in_circle) shared(N)
    {
        int tid = omp_get_thread_num();
        unsigned seed = time(NULL) * tid;
        double x, y, point;

        for (int i = 0;  i < N;  ++i) {

            x = (double)rand_r(&seed) / RAND_MAX;
            y = (double)rand_r(&seed) / RAND_MAX;

            point = x * x + y * y;
            in_circle += point < 1.0;
        }
    }
    _time = omp_get_wtime() - _time;

    float pi =  4.0 * in_circle / N / num_threads;


    printf("PI = %.5f in time %f with %d iter\n", pi, _time, N * num_threads);

    return 0;
}