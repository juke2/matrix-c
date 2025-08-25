#include <stdlib.h>
double* dcopy(size_t N, double* X, int INCX, double* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] = X[ix];
        ix += INCX;
        iy += INCY;
    }
    return Y;
}