#include <stdlib.h>
double* dscal(size_t N, double ALPHA, double* X, int INCX){
    int d = 0, ix = 0;
    for(d = 0; d < N; d++){
        X[ix] *= ALPHA;
        ix += INCX;
    }
    return X;
}