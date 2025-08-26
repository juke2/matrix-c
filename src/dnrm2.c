#include <math.h>
#include <stdlib.h>
#include <errno.h>
#include "matrix-c.h"
double dnrm2(size_t N, double* X, int INCX){
    return sqrtf(ddot(N,X,INCX,X,INCX));
}
