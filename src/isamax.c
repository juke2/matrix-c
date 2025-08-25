#include <float.h>
#include <stdlib.h>
int isamax(size_t N, float* X, int INCX){
    int d = 0, ix = 0;
    int ix_max = 0;
    float max = __FLT_MIN__;
    for(d = 0; d < N; d++){
        if(X[ix] > max){
            max = X[ix];
            ix_max = ix;
        }
        ix += INCX;
    }
    return ix_max;
}