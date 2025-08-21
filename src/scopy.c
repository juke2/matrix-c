float* SCOPY(int N, float* X, int INCX, float* Y, int INCY){
    int d = 0, ix = 0, iy = 0;
    for(d = 0; d < N; d++){
        Y[iy] = X[ix];
        ix += INCX;
        iy += INCY;
    }
    return Y;
}