#include <complex.h>
#include <stdlib.h>
float _Complex* caxpy(size_t N, float _Complex ALPHA, float _Complex* X, int INCX, float _Complex* Y, int INCY){
    // y = a*x + y
    int d = 0,ix = 0,iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] += X[ix] * ALPHA;
        ix += INCX;
        iy += INCY;
    }
    return Y;
}