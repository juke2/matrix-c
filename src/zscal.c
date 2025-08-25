#include <stdlib.h> 
#include <complex.h>
double _Complex* zscal(size_t N, double _Complex ALPHA, double _Complex* X, int INCX){
    int d = 0, ix = 0;
    for(d = 0; d < N; d++){
        X[ix] *= ALPHA;
        ix += INCX;
    }
    return X;
}