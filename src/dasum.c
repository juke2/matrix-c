#include <stdlib.h>
#include <errno.h>
#include <math.h>
double dasum(size_t N, double* X, int INCX){
    int d = 0, ix = 0;
    double abs_value = 0.0;
    for(d = 0; d < N; d++){
        abs_value += fabs(X[INCX]);
        ix += INCX;
    }
    return abs_value;
}