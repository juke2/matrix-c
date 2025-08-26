#include <stdlib.h>
#include <complex.h>
#include <errno.h>
double _Complex zdotc(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    double _Complex dot_sum = 0.0;
    for(d = 0; d < N; d++){
        dot_sum += X[ix] * conj(Y[iy]);
        ix += INCX;
        iy += INCY;
    }
    return dot_sum;
}