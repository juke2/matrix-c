#include <stdlib.h>
#include <complex.h>
#include <errno.h>
double _Complex izamax(size_t N, double _Complex* X, int INCX){
    int d = 0, ix = 0;
    int ix_max = 0;
    double max = __DBL_MIN__;
    for(d = 0; d < N; d++){
        if(cabs(X[ix]) > max){
            max = X[ix];
            ix_max = ix;
        }
        ix += INCX;
    }
    return ix_max;
}