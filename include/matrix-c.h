

#ifndef MATRIX_C_JUKE_H

#define MATRIX_C_JUKE_H

// temporary!!! ///////////////////////////////////////////
#define __STDC_VERSION__ 
// temporary!!! ///////////////////////////////////////////

#include <stdlib.h>
#if !(_GLIBCXX_HAVE_COMPLEX_H)
#include <complex.h>
#endif


// LEVEL ONE FUNCTIONS

// AXPY -- update vector
float* saxpy(size_t N, float ALPHA, float* X, int INCX, float* Y, int INCY);
double* daxpy(size_t N, double ALPHA, double* X, int INCX, double* Y, int INCY);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float _Complex* caxpy(size_t N, float _Complex ALPHA, float _Complex* X, int INCX, float _Complex* Y, int INCY);
double _Complex* zaxpy(size_t N, double _Complex ALPHA, double _Complex* X, int INCX, double _Complex* Y, int INCY);
#endif

// SCAL -- scale vector
float* sscal(size_t N, float ALPHA, float* X, int INCX);
double* dscal(size_t N, double ALPHA, double* X, int INCX);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float _Complex* cscal(size_t N, float _Complex ALPHA, float _Complex* X, int INCX);
double _Complex* zscal(size_t N, double _Complex ALPHA, double _Complex* X, int INCX);
#endif
// TODO: figure out what these functions are
// csscal?
// zdscal?

// COPY -- copy vector
int scopy(size_t N, float* X, int INCX, float* Y, int INCY);
int dcopy(size_t N, double* X, int INCX, double* Y, int INCY);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
int ccopy(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY);
int zcopy(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY);
#endif

// SWAP -- swap vectors
void sswap(size_t N, float* X, int INCX, float* Y, int INCY);
void dswap(size_t N, double* X, int INCX, double* Y, int INCY);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
void cswap(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY);
void zswap(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY);
#endif

// DOT -- dot product
float sdot(size_t N, float* X, int INCX, float* Y, int INCY);
double ddot(size_t N, double* X, int INCX, double* Y, int INCY);

#if !(_GLIBCXX_HAVE_COMPLEX_H)
// COMPLEX DOT
float _Complex cdotu(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY);
double _Complex zdotu(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY);

// COMPLEX DOT (CONJUGATE)
float _Complex cdotc(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY);
double _Complex zdotc(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY);
#endif

// unsure what sdsdot and dsdot are (internally double precision...?)
// TODO: figure this out

// NRM2 -- 2-norm
float snrm2(size_t N, float* X, int INCX);
double dnrm2(size_t N, double* X, int INCX);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float _Complex scnrm2(size_t N, float _Complex* X, int INCX);
double _Complex dznrm2(size_t N, double _Complex* X, int INCX);
#endif

// ASUM -- 1-norm
float sasum(size_t N, float* X, int INCX);
double dasum(size_t N, double* X, int INCX);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float _Complex scasum(size_t N, float _Complex* X, int INCX);
double _Complex dzasum(size_t N, double _Complex* X, int INCX);
#endif

// I_AMAX -- \infty-norm
float isamax(size_t N, float _Complex* X, int INCX);
double idamax(size_t N, float _Complex* X, int INCX);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float _Complex icamax(size_t N, float _Complex* X, int INCX);
double _Complex izamax(size_t N, double _Complex* X, int INCX);
#endif

// ROTG - generate plane (Given’s) rotation (c real, s complex) 
void srotg(float A, float B, float* C, float* S);
void drotg(double A, double B, double* C, double* S);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
void crotg(float _Complex A, float _Complex B, float* C, float _Complex* S);
void zrotg(double _Complex A, double _Complex B, double* C, double _Complex* S);
#endif

// ROT - apply plane rotation (c real, s complex)
void srot(size_t N, float* X, int INCX, float* Y, int INCY, float C, float  S);
void drot(size_t N, double* X, int INCX, double* Y, int INCY, double C, double  S);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
void crot(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY, float C, float _Complex S);
void zrot(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY, double C, double _Complex S);

// (c complex, s complex)
void csrot(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY, float _Complex C, float _Complex S);
void zdrot(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY, double _Complex C, double _Complex S);
#endif

// ROTMG - generate modified plane rotation
// srotmg
// drotmg

// ROTM - apply modified plane rotation
// srotm
// drotm


// LEVEL TWO FUNCTIONS



// LEVEL THREE FUNCTIONS














#endif