#include <stdlib.h> 
#include <complex.h>
float* cscal(size_t N, float _Complex ALPHA, float _Complex* X, int INCX){
    int d = 0, ix = 0;
    for(d = 0; d < N; d++){
        X[ix] *= ALPHA;
        ix += INCX;
    }
    return X;
}