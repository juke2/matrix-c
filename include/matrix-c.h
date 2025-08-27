// descriptions of functions taken from https://www.netlib.org/blas/

#ifndef MATRIX_C_H

#define MATRIX_C_H

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
float* scopy(size_t N, float* X, int INCX, float* Y, int INCY);
double* dcopy(size_t N, double* X, int INCX, double* Y, int INCY);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float _Complex* ccopy(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY);
double _Complex* zcopy(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY);
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
float scnrm2(size_t N, float _Complex* X, int INCX);
double dznrm2(size_t N, double _Complex* X, int INCX);
#endif

// ASUM -- 1-norm
float sasum(size_t N, float* X, int INCX);
double dasum(size_t N, double* X, int INCX);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float scasum(size_t N, float _Complex* X, int INCX);
double dzasum(size_t N, double _Complex* X, int INCX);
#endif

// I_AMAX -- \infty-norm
float isamax(size_t N, float* X, int INCX);
double idamax(size_t N, double* X, int INCX);
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

// (c real, s real)
void csrot(size_t N, float _Complex* X, int INCX, float _Complex* Y, int INCY, float C, float S);
void zdrot(size_t N, double _Complex* X, int INCX, double _Complex* Y, int INCY, double C, double S);
#endif

// ROTMG - generate modified plane rotation
void srotmg(float D1, float D2, float A, float B, float* PARAM);
void drotmg(double D1, double D2, double A, double B, double* PARAM);

// ROTM - apply modified plane rotation
void srotm(size_t N, float* X, int INCX, float* Y, int INCY, float* PARAM);
void drotm(size_t N, double* X, int INCX, double* Y, int INCY, double* PARAM);


// LEVEL TWO FUNCTIONS

// MATRIX-VECTOR OPERATIONS

// GEMV - general matrix-vector multiply
float* sgemv(char TRANS, size_t M, size_t N, float ALPHA, float* A, size_t ldA, float* X, int INCX, float BETA, float* Y, int INCY);
double* dgemv(char TRANS, size_t M, size_t N, double ALPHA, double* A, size_t ldA, double* X, int INCX, double BETA, double* Y, int INCY);
#if !(_GLIBCXX_HAVE_COMPLEX_H)
float _Complex* cgemv(char TRANS, size_t M, size_t N, float _Complex ALPHA, float _Complex* A, size_t ldA, float _Complex* X, int INCX, float _Complex BETA, float _Complex* Y, int INCY);
double _Complex* zgemv(char TRANS, size_t M, size_t N, double _Complex ALPHA, double _Complex* A, size_t ldA, double _Complex* X, int INCX, double _Complex BETA, double _Complex* Y, int INCY);
#endif

// HEMV - Hermetian matrix-vector mul
#if !(_GLIBCXX_HAVE_COMPLEX_H) 
float _Complex* chemv(char UPLO, size_t N, float _Complex ALPHA, float _Complex* A, size_t ldA, float _Complex* X, int INCX, float _Complex BETA, float _Complex* Y, int INCY);
double _Complex* zhemv(char UPLO, size_t N, double _Complex ALPHA, double _Complex* A, size_t ldA, double _Complex* X, int INCX, double _Complex BETA, double _Complex* Y, int INCY);
#endif

// SYMV - Symmetric matrix-vector mul
float* ssymv(char UPLO, size_t N, float ALPHA, float* A, size_t ldA, float* X, int INCX, float BETA, float* Y, int INCY);
double* dsymv(char UPLO, size_t N, double ALPHA, double* A, size_t ldA, double* X, int INCX, double BETA, double* Y, int INCY);

// TRMV - Triangular matrix-vector mul
float* strmv(char UPLO, char TRANS, char DIAG, size_t N, float* A, size_t ldA, float* X, int INCX );
double* dtrmv(char UPLO, char TRANS, char DIAG, size_t N, double* A, size_t ldA, double* X, int INCX );
#if !(_GLIBCXX_HAVE_COMPLEX_H) 
float _Complex* ctrmv(char UPLO, char TRANS, char DIAG, size_t N, float _Complex* A, size_t ldA, float _Complex* X, int INCX );
double _Complex* ztrmv(char UPLO, char TRANS, char DIAG, size_t N, double _Complex* A, size_t ldA, double _Complex* X, int INCX );
#endif

// TRSV - Triangular solve
float* strsv(char UPLO, char TRANS, char DIAG, size_t N, float* A, size_t ldA, float* X, int INCX );
double* dtrsv(char UPLO, char TRANS, char DIAG, size_t N, double* A, size_t ldA, double* X, int INCX );
#if !(_GLIBCXX_HAVE_COMPLEX_H) 
float _Complex* ctrsv(char UPLO, char TRANS, char DIAG, size_t N, float _Complex* A, size_t ldA, float _Complex* X, int INCX );
double _Complex* ztrsv(char UPLO, char TRANS, char DIAG, size_t N, double _Complex* A, size_t ldA, double _Complex* X, int INCX );
#endif

// GER - general rank-1 update 
float* sger(size_t M, size_t N, float ALPHA, float* X, int INCX, float* Y, int INCY, float* A, size_t ldA);
double* dger(size_t M, size_t N, double ALPHA, double* X, int INCX, double* Y, int INCY, double* A, size_t ldA);

// GERU - general rank-1 update (complex)
#if !(_GLIBCXX_HAVE_COMPLEX_H) 
float _Complex* cgeru(size_t M, size_t N, float _Complex ALPHA, float _Complex* X, int INCX, float _Complex* Y, int INCY, float _Complex* A, size_t ldA);
double _Complex* zgeru(size_t M, size_t N, double _Complex ALPHA, double _Complex* X, int INCX, double _Complex* Y, int INCY, double _Complex* A, size_t ldA);
#endif

// GERC - general rank-1 update (complex conj)
#if !(_GLIBCXX_HAVE_COMPLEX_H) 
float _Complex* cgerc(size_t M, size_t N, float _Complex ALPHA, float _Complex* X, int INCX, float _Complex* Y, int INCY, float _Complex* A, size_t ldA);
double _Complex* zgerc(size_t M, size_t N, double _Complex ALPHA, double _Complex* X, int INCX, double _Complex* Y, int INCY, double _Complex* A, size_t ldA);
#endif

// SYR - symmetric rank-1 update
float* ssyr(char UPLO, size_t N, float ALPHA, float* X, int INCX, float* A, size_t ldA); 
double* dsyr(char UPLO, size_t N, double ALPHA, double* X, int INCX, double* A, size_t ldA);

// HER - Hermitian rank-1 update
#if !(_GLIBCXX_HAVE_COMPLEX_H) 
float _Complex* cher(char UPLO, size_t N, float _Complex ALPHA, float _Complex* X, int INCX, float _Complex* A, size_t ldA);
double _Complex* zher(char UPLO, size_t N, double _Complex ALPHA, double _Complex* X, int INCX, double _Complex* A, size_t ldA);
#endif

// SYR2 - symmetric rank-2 update
float* ssyr2(char UPLO, size_t N, float ALPHA, float* X, int INCX, float* Y, int INCY, float* A, size_t ldA);
double* dsyr2(char UPLO, size_t N, double ALPHA, double* X, int INCX, double* Y, int INCY, double* A, size_t ldA);

// HER2- Hermitian rank-2 update 
#if !(_GLIBCXX_HAVE_COMPLEX_H) 
float _Complex* cher2(char UPLO, size_t N, float _Complex ALPHA, float _Complex* X, int INCX, float _Complex* Y, int INCY, float _Complex* A, size_t ldA);
double _Complex* zher2(char UPLO, size_t N, double _Complex ALPHA, double _Complex* X, int INCX, double _Complex* Y, int INCY, double _Complex* A, size_t ldA);
#endif


// BAND STORAGE



// LEVEL THREE FUNCTIONS














#endif