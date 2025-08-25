#include <stdlib.h>
#include <complex.h>
#include <errno.h>
float _Complex cdotu(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY){
    errno = ENOSYS;
    return _Complex_I;
}