#include <stdlib.h>
#include <errno.h>
double idamax(size_t N, double* X, int INCX){
    int d = 0, ix = 0;
    int ix_max = 0;
    double max = __DBL_MIN__;
    for(d = 0; d < N; d++){
        if(X[ix] > max){
            max = X[ix];
            ix_max = ix;
        }
        ix += INCX;
    }
    return ix_max;
}
