#include <stdlib.h>
#include <errno.h>
#include <complex.h>
float _Complex* chemv(char UPLO, size_t N, float _Complex ALPHA, float _Complex* A, size_t ldA, float _Complex* X, int INCX, float _Complex BETA, float _Complex* Y, int INCY){
    size_t ix = 0, iy = 0, d = 0, mem_loc = 0;

    float _Complex* X_LOC = (float _Complex*)malloc(sizeof(float _Complex*) * N);
     // scale Y according to BETA
    for(d = 0; d < N; d++){
        Y[iy] = Y[iy] * BETA;
        iy += INCY;
    }

    // scale X according to ALPHA
    for(d = 0; d < N; d++){
        X_LOC[ix] = X[ix] * ALPHA;
        ix += INCX;
    }

    // multiply mat A and vec X.
    ix = 0;
    iy = 0;
    // normal mult
    if(UPLO == 'U'){
        
    }
    else{

    }
    errno = ENOSYS;
    return A;
}