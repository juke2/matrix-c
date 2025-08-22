#include <complex.h>
#include <stdlib.h>
double _Complex* zaxpy(size_t N, double _Complex ALPHA, double _Complex* X, int INCX, double _Complex* Y, int INCY){
    // y = a*x + y
    int d = 0,ix = 0,iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] += X[ix] * ALPHA;
        ix += INCX;
        iy += INCY;
    }
    return Y;
}