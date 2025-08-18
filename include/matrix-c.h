

#ifndef MATRIX_C_JUKE_H

#define MATRIX_C_JUKE_H

// temporary!!! ///////////////////////////////////////////
#define __STDC_VERSION__ 
// temporary!!! ///////////////////////////////////////////

#ifndef  __STDC_VERSION__ 
    // this means we're running a C version < C99, which is where complex.h was implemented.
    // thus we shouldn't include complex functions
    #define MATRIX_C_NO_COMPLEX
#endif

#include <stdlib.h>
#ifndef MATRIX_C_NO_COMPLEX
#include <complex.h>
#endif

#ifndef _Imaginary_I
    #define MATRIX_C_NO_COMPLEX
#endif

enum ERROR_CODES{
    MATRIX_C_NOT_IMPLEMENTED = -1,
    MATRIX_C_PROCESS_COMPLETED = 0,
};

// AXPY -- update vector
int saxpy(size_t n, float alpha, float* x, int incx, float* y, int incy);
int daxpy(size_t n, double alpha, double* x, int incx, double* y, int incy);
#ifndef MATRIX_C_NO_COMPLEX
int caxpy(size_t n, float _Complex alpha, float _Complex* x, int incx, float _Complex* y, int incy);
int zaxpy(size_t n, double _Complex alpha, double _Complex* x, int incx, double _Complex* y, int incy);
#endif

// SCAL -- scale vector
int sscal(size_t n, float alpha, float* x, int incx);
int dscal(size_t n, double alpha, double* x, int incx);
#ifndef MATRIX_C_NO_COMPLEX
int cscal(size_t n, float _Complex alpha, float _Complex* x, int incx);
int zscal(size_t n, double _Complex alpha, double _Complex* x, int incx);
#endif
// csscal?
// zdscal?

// COPY -- copy vector
int scopy(size_t n, float* x, int incx, float* y, int incy);
int dcopy(size_t n, double* x, int incx, double* y, int incy);
#ifndef MATRIX_C_NO_COMPLEX
int ccopy(size_t n, float _Complex* x, int incx, float _Complex* y, int incy);
int zcopy(size_t n, double _Complex* x, int incx, double _Complex* y, int incy);
#endif

// SWAP -- swap vectors
int sswap(size_t n, float* x, int incx, float* y, int incy);
int dswap(size_t n, double* x, int incx, double* y, int incy);
#ifndef MATRIX_C_NO_COMPLEX
int cswap(size_t n, float _Complex* x, int incx, float _Complex* y, int incy);
int zswap(size_t n, double _Complex* x, int incx, double _Complex* y, int incy);
#endif













#endif