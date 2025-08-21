#include <math.h>
int SASUM(int N, float* X, int INCX){
    int d = 0, ix = 0;
    float abs_value;
    for(d = 0; d < N; d++){
        abs_value += fabs(X[INCX]);
        ix += INCX;
    }
    return abs_value;
}