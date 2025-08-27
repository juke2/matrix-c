#include <stdlib.h>
#include <errno.h>
#include <complex.h>
double _Complex* zgemv(char TRANS, size_t M, size_t N, double _Complex ALPHA, double _Complex* A, size_t ldA, double _Complex* X, int INCX, double _Complex BETA, double _Complex* Y, int INCY){
size_t i = 0, j = 0, d = 0, iy = 0, ix = 0, mem_loc = 0, loc_m = 0, loc_n = 0, lenx = 0, leny = 0;

    if(TRANS != 'N' && TRANS != 'T' && TRANS != 'C'){
        TRANS = 'N';
    }

    if(TRANS == 'N'){
        loc_m = N;
        loc_n = M;
        lenx = N;
        leny = M;
    }
    else{
        loc_m = M;
        loc_n = N;
        leny = N;
        lenx = M;
    }
    

    // scale Y according to BETA
    for(d = 0; d < leny; d++){
        Y[iy] = Y[iy] * BETA;
        iy += INCY;
    }

    // scale X according to ALPHA
    for(d = 0; d < lenx; d++){
        X[ix] = X[ix] * ALPHA;
        ix += INCX;
    }

    // multiply mat A and vec X.

    // normal mult
    if(TRANS == 'N'){
        for(i = 0; i < loc_m; i++){
            for(j = 0; j < loc_n; j++){
                mem_loc = i * ldA + j;
                Y[i] += A[mem_loc] * X[i];
            }
        }
    }

    // mult with TRANS of A
    else if(TRANS == 'T'){
        for(i = 0; i < loc_m; i++){
            for(j = 0; j < loc_n; j++){
                mem_loc = j * ldA + i;
                Y[i] += A[mem_loc] * X[i];
            }
        }
    }

    else{
        for(i = 0; i < loc_m; i++){
            for(j = 0; j < loc_n; j++){
                mem_loc = j * ldA + i;
                Y[i] += conj(A[mem_loc] * X[i]);
            }
        }
    }

    return Y;
}