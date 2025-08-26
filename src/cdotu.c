#include <stdlib.h>
#include <complex.h>
#include <errno.h>
float _Complex cdotu(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    float _Complex dot_sum = 0.0;
    for(d = 0; d < N; d++){
        dot_sum += X[ix] * Y[iy];
        ix += INCX;
        iy += INCY;
    }
    return dot_sum;
}