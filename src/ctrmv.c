#include <stdlib.h>
#include <errno.h>
#include <complex.h>
float _Complex* ctrmv(char UPLO, char TRANS, char DIAG, size_t N, float _Complex* A, size_t ldA, float _Complex* X, int INCX ){
    errno = ENOSYS;
    return NULL;
}