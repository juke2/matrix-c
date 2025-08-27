#include <stdlib.h>
#include <complex.h>
#include <errno.h>
void zdrot(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY, double C, double S){
    int d = 0, ix = 0, iy = 0, xty = 0;
    for(d = 0; d<N; d++){
        xty = C * X[ix] + S * Y[iy];
        Y[iy] = C * Y[iy] - S * X[ix];
        X[ix] = xty;
        ix += INCX;
        iy += INCY;
    }
    return;
}