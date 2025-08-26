#include <stdlib.h>
#include <errno.h>
#include <complex.h>
double _Complex* zgemv(char TRANS, size_t M, size_t N, double _Complex ALPHA, double _Complex* A, size_t ldA, double _Complex* X, int INCX, double _Complex BETA, double _Complex* Y, int INCY){
    errno = ENOSYS;
    return NULL;
}