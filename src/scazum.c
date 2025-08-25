#include <complex.h>
#include <stdlib.h>
#include <errno.h>
float _Complex scasum(size_t N, float _Complex* X, int INCX){
    errno = ENOSYS;
    return _Complex_I;
}