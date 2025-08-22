#include <stdlib.h>
void srot(size_t N, float* X, int INCX, float* Y, int INCY, float C, float S){
    int d = 0, ix = 0, iy = 0, xty = 0;
    for(d = 0; d<N; d++){
        xty = C * X[ix] + S * Y[iy];
        Y[iy] = C * Y[iy] - S * X[ix];
        X[ix] = xty;
        ix += INCX;
        iy += INCY;
    }
}