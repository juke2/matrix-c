#include <stdlib.h>
#include <complex.h>
#include <errno.h>
#include <math.h>
float scasum(size_t N, float _Complex* X, int INCX){
    int d = 0, ix = 0;
    float abs_value = 0.0;
    for(d = 0; d < N; d++){
        abs_value += fabsf(crealf(X[INCX])) + fabsf(cimagf(X[INCX]));
        ix += INCX;
    }
    return abs_value;
}