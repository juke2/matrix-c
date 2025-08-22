#include <stdlib.h>
double* daxpy(size_t N, double ALPHA, double* X, int INCX, double* Y, int INCY){
    // y = a*x + y
    int d = 0,ix = 0,iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] += X[ix] * ALPHA;
        ix += INCX;
        iy += INCY;
    }
    return Y;
}