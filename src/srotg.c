#include <math.h>
void srotg(float A, float B, float *C, float *S){
    float r = 0.0;
    r = hypotf(A,B);
    if(r == 0){
        *C = 0;
        *S = 0;
        return;
    }
    *C = A/r;
    *S = -B/r;
    return;
}