#include <stdlib.h>
#include <complex.h>
double _Complex* zcopy(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] = X[ix];
        ix += INCX;
        iy += INCY;
    }
    return Y;
}