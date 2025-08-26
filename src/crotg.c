#include <complex.h>
#include <errno.h>
#include <math.h>
#include "matrix-c.h"
void crotg(float _Complex A, float _Complex B, float* C, float _Complex* S){
    if(cimagf(A) == 0 && cimagf(B) == 0){
        float c_real = 0, s_real = 0;
        srotg(crealf(A), crealf(B), &c_real, &s_real);
        *C = c_real;
        *S = s_real;
        return;
    }
    float _Complex sgn_a = 0;
    float _Complex abs_a = cabsf(A);
    float _Complex abs_b = cabsf(B);
    float _Complex sqrt_a_and_b = csqrtf(abs_a * abs_a + abs_b * abs_b);
    if(A == 0){
        sgn_a = 1;
    }
    else{
        sgn_a = A / abs_a;
    }
    *C = (float)(abs_a / sqrt_a_and_b);
    *S = sgn_a * conjf(B) / sqrt_a_and_b;
    return;
}