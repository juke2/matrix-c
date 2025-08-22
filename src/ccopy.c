#include <stdlib.h>
#include <complex.h>
float* ccopy(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] = X[ix];
        ix += INCX;
        iy += INCY;
    }
    return Y;
}