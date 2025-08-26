#include <math.h>
void drotg(double A, double B, double* C, double* S){
    double r = 0.0;
    r = hypot(A,B);
    if(r == 0){
        *C = 0;
        *S = 0;
        return;
    }
    *C = A/r;
    *S = -B/r;
    return;
}
