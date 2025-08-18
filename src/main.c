#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#include <time.h>
#include <math.h>

enum ERROR_CODES{
    NOT_IMPLEMENTED = -1,
    PROCESS_COMPLETED = 0,
};

int SROTG(float A, float B, float *C, float *S){
    float r;
    r = hypotf(A,B);
    *C = A/r;
    *S = -B/r;
    return PROCESS_COMPLETED;
}

int SROTMG(float D1, float D2, float A, float B /*param here*/){
    return NOT_IMPLEMENTED;
}

int SROT(int N, float* X, int INCX, float* Y, int INCY, float C, float S){
    int d, ix, iy, xty;
    for(d; d<N; d++){
        xty = C * X[ix] + S * Y[iy];
        Y[iy] = C * Y[iy] - S * X[ix];
        X[ix] = xty;
        ix += INCX;
        iy += INCY;
    }
}

int SROTM(int N, float* X, int INCX, float* Y, int INCY /*param here*/){
    return NOT_IMPLEMENTED;
}

int SSWAP(int N, float* X, int INCX, float* Y, int INCY){
    int d, ix, iy, tx;
    for(d; d < N; d++){
        tx = X[ix];
        X[ix] = Y[iy];
        Y[iy] = tx;
        ix += INCX;
        iy += INCY;
        d++;
    }
    return PROCESS_COMPLETED;
}

int SCAL(int N, float ALPHA, float * X, int INCX){
    int d, ix;
    for(d; d < N; d++){
        X[ix] *= ALPHA;
        ix += INCX;
    }
    return PROCESS_COMPLETED;
}

int SCOPY(int N, float* X, int INCX, float* Y, int INCY){
    int d, ix, iy;
    for(d; d < N; d++){
        Y[iy] = X[ix];
        ix += INCX;
        iy += INCY;
    }
    return PROCESS_COMPLETED;
}

int SAXPY(int N, float ALPHA, float* X, int INCX, float* Y, int INCY){
    // y = a*x + y
    int d,ix,iy;
    for(d; d < N; d++){
        Y[iy] += X[ix] * ALPHA;
        ix += INCX;
        iy += INCY;
    }
    return PROCESS_COMPLETED;
}

int SDOT(int N, float* X, int INCX, float* Y, int INCY){
    int d, ix, iy;
    float dot_sum;
    for(d; d < N; d++){
        dot_sum += X[ix] * Y[iy];
        ix += INCX;
        iy += INCY;
    }
    return dot_sum;
}

int SDSDOT(int N, float* X, int INCX, double* Y, int INCY){
    return NOT_IMPLEMENTED;
}
// unsure what xxDOT means

int SNRM2(int N, float* X, int INCX){
    // I think this is the correct implementation?
    // see https://en.wikipedia.org/wiki/Euclidean_space#Metric_structure 
    return sqrtf(SDOT(N,X,INCX,X,INCX));
    // very susceptible to overflow though, need to implement something similar
    // to hypotf maybe?
}

int SASUM(int N, float* X, int INCX){
    int d, ix;
    float abs_value;
    for(d; d < N; d++){
        abs_value += abs(X[INCX]);
        ix += INCX;
    }
    return abs_value;
}

int ISAMAX(int N, float* X, int INCX){
    int d, ix;
    int ix_max = -1;
    float max = __FLT_MIN__;
    for(d; d < N; d++){
        if(X[ix] > max){
            max = X[ix];
            ix_max = ix;
        }
        ix += INCX;
    }
    return ix_max;
}





int main(int argc, char **argv)
{
    printf("Hello World!");
    return 0;
}