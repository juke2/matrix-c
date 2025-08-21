#include <stdlib.h>
void SSWAP(size_t N, float* X, int INCX, float* Y, int INCY){
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