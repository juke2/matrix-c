#include <stdlib.h>
#include <complex.h>
#include <errno.h>
void csrot(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY, float _Complex C, float _Complex S){
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