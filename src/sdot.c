#include <stdlib.h>
float sdot(size_t N, float* X, int INCX, float* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    float dot_sum;
    for(d = 0; d < N; d++){
        dot_sum += X[ix] * Y[iy];
        ix += INCX;
        iy += INCY;
    }
    return dot_sum;
}