#include <stdlib.h>
#include <complex.h>
#include <errno.h>
#include <math.h>
double _Complex dzasum(size_t N, double _Complex* X, int INCX){
    int d = 0, ix = 0;
    double abs_value = 0.0;
    for(d = 0; d < N; d++){
        abs_value += fabs(creal(X[INCX])) + fabs(cimag(X[INCX]));
        ix += INCX;
    }
    return abs_value;
}