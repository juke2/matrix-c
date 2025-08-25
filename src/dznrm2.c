#include <stdlib.h>
#include <complex.h>
#include <errno.h>
double _Complex dznrm2(size_t N, double _Complex* X, int INCX){
    errno = ENOSYS;
    return (double _Complex) _Complex_I;
}