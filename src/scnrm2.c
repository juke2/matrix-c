#include <math.h>
#include <stdlib.h>
#include <errno.h>
#include <complex.h>
float scnrm2(size_t N, float _Complex* X, int INCX){
    int d = 0, ix = 0;
    float norm_sum = 0;
    for(d = 0; d < N; d++){
        norm_sum += cabsf(X[ix]);
        ix += INCX;
    }
    return sqrtf(norm_sum);
}