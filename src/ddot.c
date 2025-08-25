#include <stdlib.h>
double ddot(size_t N, double* X, int INCX, double* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    double dot_sum;
    for(d = 0; d < N; d++){
        dot_sum += X[ix] * Y[iy];
        ix += INCX;
        iy += INCY;
    }
    return dot_sum;
}