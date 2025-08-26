#include <stdlib.h>
#include <complex.h>
#include <errno.h>
float _Complex icamax(size_t N, float _Complex* X, int INCX){
    int d = 0, ix = 0;
    int ix_max = 0;
    float max = __FLT_MIN__;
    for(d = 0; d < N; d++){
        if(cabsf(X[ix]) > max){
            max = X[ix];
            ix_max = ix;
        }
        ix += INCX;
    }
    return ix_max;
}