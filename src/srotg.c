int SROTG(float A, float B, float *C, float *S){
    float r = 0.0;
    r = hypotf(A,B);
    *C = A/r;
    *S = -B/r;
    return 0;
}