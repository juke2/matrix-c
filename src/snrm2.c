#include <math.h>
#include <stdlib.h>
#include "matrix-c.h"
float snrm2(size_t N, float* X, int INCX){
    // I think this is the correct implementation?
    // see https://en.wikipedia.org/wiki/Euclidean_space#Metric_structure 
    return sqrtf(sdot(N,X,INCX,X,INCX));
    // very susceptible to overflow though, need to implement something similar
    // to hypotf maybe?
}