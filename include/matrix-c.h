

#ifndef MATRIX_C_JUKE_H

#define MATRIX_C_JUKE_H

// temporary!!! ///////////////////////////////////////////
#define __STDC_VERSION__ 
// temporary!!! ///////////////////////////////////////////

#include <stdlib.h>
#if !(_GLIBCXX_HAVE_COMPLEX_H)
#include <complex.h>
#endif


// AXPY -- update vector
float* saxpy(size_t n, float alpha, float* x, int incx, float* y, int incy);
double* daxpy(size_t n, double alpha, double* x, int incx, double* y, int incy);
#if (_GLIBCXX_HAVE_COMPLEX_H)
float _Complex* caxpy(size_t n, float _Complex alpha, float _Complex* x, int incx, float _Complex* y, int incy);
double _Complex* zaxpy(size_t n, double _Complex alpha, double _Complex* x, int incx, double _Complex* y, int incy);
#endif

// SCAL -- scale vector
float* sscal(size_t n, float alpha, float* x, int incx);
double* dscal(size_t n, double alpha, double* x, int incx);
#if (_GLIBCXX_HAVE_COMPLEX_H)
float _Complex* cscal(size_t n, float _Complex alpha, float _Complex* x, int incx);
double _Complex* zscal(size_t n, double _Complex alpha, double _Complex* x, int incx);
#endif
// TODO: figure out what these functions are
// csscal?
// zdscal?

// COPY -- copy vector
int scopy(size_t n, float* x, int incx, float* y, int incy);
int dcopy(size_t n, double* x, int incx, double* y, int incy);
#if (_GLIBCXX_HAVE_COMPLEX_H)
int ccopy(size_t n, float _Complex* x, int incx, float _Complex* y, int incy);
int zcopy(size_t n, double _Complex* x, int incx, double _Complex* y, int incy);
#endif

// SWAP -- swap vectors
void sswap(size_t n, float* x, int incx, float* y, int incy);
void dswap(size_t n, double* x, int incx, double* y, int incy);
#if (_GLIBCXX_HAVE_COMPLEX_H)
void cswap(size_t n, float _Complex* x, int incx, float _Complex* y, int incy);
void zswap(size_t n, double _Complex* x, int incx, double _Complex* y, int incy);
#endif

// DOT -- dot product
float sdot(size_t n, float* x, int incx, float* y, int incy);
double ddot(size_t n, double* x, int incx, double* y, int incy);

#if (_GLIBCXX_HAVE_COMPLEX_H)
// COMPLEX DOT
float _Complex cdotu(size_t n, float _Complex* x, int incx, float _Complex* y, int incy);
double _Complex zdotu(size_t n, double _Complex* x, int incx, double _Complex* y, int incy);

// COMPLEX DOT (CONJUGATE)
float _Complex cdotc(size_t n, float _Complex* x, int incx, float _Complex* y, int incy);
double _Complex zdotc(size_t n, double _Complex* x, int incx, double _Complex* y, int incy);
#endif

// unsure what sdsdot and dsdot are (internally double precision...?)
// TODO: figure this out

// NRM2 -- 2-norm
float snrm2(size_t n, float* x, int incx);
double dnrm2(size_t n, double* x, int incx);
#if (_GLIBCXX_HAVE_COMPLEX_H)
float _Complex scnrm2(size_t n, float _Complex* x, int incx);
double _Complex dznrm2(size_t n, double _Complex* x, int incx);
#endif

// ASUM -- 1-norm
float sasum(size_t n, float* x, int incx);
double dasum(size_t n, double* x, int incx);
#if (_GLIBCXX_HAVE_COMPLEX_H)
float _Complex scasum(size_t n, float _Complex* x, int incx);
double _Complex dzasum(size_t n, double _Complex* x, int incx);
#endif

// I_AMAX -- \infty-norm
float si_amax(size_t n, float _Complex* x, int incx);
double di_amax(size_t n, float _Complex* x, int incx);
#if (_GLIBCXX_HAVE_COMPLEX_H)
float _Complex ci_amax(size_t n, float _Complex* x, int incx);
double _Complex zi_amax(size_t n, double _Complex* x, int incx);
#endif















#endif