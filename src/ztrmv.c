#include <stdlib.h>
#include <errno.h>
#include <complex.h>
double _Complex* ztrmv(char UPLO, char TRANS, char DIAG, size_t N, double _Complex* A, size_t ldA, double _Complex* X, int INCX ){
    errno = ENOSYS;
    return NULL;
}