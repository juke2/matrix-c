#include <stdlib.h>
#include <errno.h>
float* sger(size_t M, size_t N, float ALPHA, float* X, int INCX, float* Y, int INCY, float* A, size_t ldA){
    size_t i = 0, j = 0, ix = 0, iy = 0, mem_loc = 0;
    for(i = 0; i < M; i++){
        iy = 0;
        for(j = 0; j < N; j++){
            mem_loc = i * ldA + j;
            A[mem_loc] +=  ALPHA * X[ix] * Y[iy];
            iy += INCY;
        }
        ix += INCX;
    }
    return A;
}