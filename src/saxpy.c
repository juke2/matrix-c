float* SAXPY(int N, float ALPHA, float* X, int INCX, float* Y, int INCY){
    // y = a*x + y
    int d = 0,ix = 0,iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] += X[ix] * ALPHA;
        ix += INCX;
        iy += INCY;
    }
    return Y;
}