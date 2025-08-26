#include <stdlib.h>
#include <errno.h>
#include <complex.h>
float _Complex* cgemv(char TRANS, size_t M, size_t N, float _Complex ALPHA, float _Complex* A, size_t ldA, float _Complex* X, int INCX, float _Complex BETA, float _Complex* Y, int INCY){
    errno = ENOSYS;
    return NULL;
}