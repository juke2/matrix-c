#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <errno.h>
double dznrm2(size_t N, double _Complex* X, int INCX){
    int d = 0, ix = 0;
    double norm_sum = 0;
    for(d = 0; d < N; d++){
        norm_sum += cabs(X[ix]);
        ix += INCX;
    }
    return sqrt(norm_sum);
}