#include <errno.h>
#include <complex.h>
#include "matrix-c.h"
void zrotg(double _Complex A, double _Complex B, double* C, double _Complex* S){
    if(cimag(A) == 0 && cimag(B) == 0){
        double c_real = 0, s_real = 0;
        drotg(creal(A), creal(B), &c_real, &s_real);
        *C = c_real;
        *S = s_real;
        return;
    }
    double _Complex sgn_a = 0;
    double _Complex abs_a = cabs(A);
    double _Complex abs_b = cabs(B);
    double _Complex sqrt_a_and_b = csqrt(abs_a * abs_a + abs_b * abs_b);
    if(A == 0){
        sgn_a = 1;
    }
    else{
        sgn_a = A / abs_a;
    }
    *C = (double)(abs_a / sqrt_a_and_b);
    *S = sgn_a * conj(B) / sqrt_a_and_b;
    return;
}