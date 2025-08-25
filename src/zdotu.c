#include <stdlib.h>
#include <complex.h>
#include <errno.h>
double _Complex zdotu(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY){
    errno = ENOSYS;
    return (double _Complex)_Complex_I;
}