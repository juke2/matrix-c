#include <math.h>
#include <stdlib.h>
int sasum(size_t N, float* X, int INCX){
    int d = 0, ix = 0;
    float abs_value = 0.0;
    for(d = 0; d < N; d++){
        abs_value += fabsf(X[INCX]);
        ix += INCX;
    }
    return abs_value;
}