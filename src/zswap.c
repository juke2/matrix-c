#include <stdlib.h>
#include <complex.h>
void zswap(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY){
    int d = 0, ix = 0, iy = 0, tx = 0;
    for(d = 0; d < N; d++){
        tx = X[ix];
        X[ix] = Y[iy];
        Y[iy] = tx;
        ix += INCX;
        iy += INCY;
        d++;
    }
    return;
}