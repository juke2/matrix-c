#include <matrix-c.h>
#include <stdio.h>
#include <complex.h>
#include <errno.h>
int number_of_tests = 0;
int tests_successful = 0;

void print_test_result(int success, char* function_name){
    number_of_tests++;
    if(success){
        printf("\e[32mFunction \e[33m%s\e[32m is implemented.\e[0m\n", function_name);
        tests_successful++;
    }
    else{
        printf("\e[31mFunction \e[33m%s\e[31m is not implemented.\e[0m\n", function_name);
    }
    return;
}

void test_saxpy_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    float* vec2 = (float*)(calloc(3, sizeof(float)));
    saxpy(3, 1.0, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "saxpy");
    free(vec1);
    free(vec2);
    return;
}

void test_daxpy_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    double* vec2 = (double*)(calloc(3, sizeof(double)));
    daxpy(3, 1.0, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "daxpy");
    free(vec1);
    free(vec2);
    return;
}

void test_caxpy_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    float _Complex* vec2 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    caxpy(3, 1.0, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "caxpy");
    free(vec1);
    free(vec2);
    return;
}

void test_zaxpy_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    double _Complex* vec2 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zaxpy(3, 1.0, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "zaxpy");
    free(vec1);
    free(vec2);
    return;
}

void test_sscal_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    sscal(3, 1.0, vec1, 1);
    print_test_result(errno != ENOSYS, "sscal");
    free(vec1);
    return;
}

void test_dscal_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    dscal(3, 1.0, vec1, 1);
    print_test_result(errno != ENOSYS, "dscal");
    free(vec1);
    return;
}

void test_cscal_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    cscal(3, 1.0, vec1, 1);
    print_test_result(errno != ENOSYS, "cscal");
    free(vec1);
    return;
}

void test_zscal_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zscal(3, 1.0, vec1, 1);
    print_test_result(errno != ENOSYS, "zscal");
    free(vec1);
    return;
}

void test_scopy_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    float* vec2 = (float*)(calloc(3, sizeof(float)));
    scopy(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "scopy");
    free(vec1);
    free(vec2);
    return;
}

void test_dcopy_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    double* vec2 = (double*)(calloc(3, sizeof(double)));
    dcopy(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "dcopy");
    free(vec1);
    free(vec2);
    return;
}

void test_ccopy_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    float _Complex* vec2 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    ccopy(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "ccopy");
    free(vec1);
    free(vec2);
    return;
}

void test_zcopy_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    double _Complex* vec2 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zcopy(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "zcopy");
    free(vec1);
    free(vec2);
    return;
}

void test_sswap_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    float* vec2 = (float*)(calloc(3, sizeof(float)));
    sswap(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "sswap");
    free(vec1);
    free(vec2);
    return;
}

void test_dswap_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    double* vec2 = (double*)(calloc(3, sizeof(double)));
    dswap(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "dswap");
    free(vec1);
    free(vec2);
    return;
}

void test_cswap_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    float _Complex* vec2 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    cswap(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "cswap");
    free(vec1);
    free(vec2);
    return;
}

void test_zswap_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    double _Complex* vec2 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zswap(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "zswap");
    free(vec1);
    free(vec2);
    return;
}

void test_sdot_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    float* vec2 = (float*)(calloc(3, sizeof(float)));
    sdot(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "sdot");
    free(vec1);
    free(vec2);
    return;
}

void test_ddot_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    double* vec2 = (double*)(calloc(3, sizeof(double)));
    ddot(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "ddot");
    free(vec1);
    free(vec2);
    return;
}

void test_cdotu_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    float _Complex* vec2 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    cdotu(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "cdotu");
    free(vec1);
    free(vec2);
    return;
}

void test_zdotu_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    double _Complex* vec2 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zdotu(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "zdotu");
    free(vec1);
    free(vec2);
    return;
}

void test_cdotc_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    float _Complex* vec2 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    cdotc(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "cdotc");
    free(vec1);
    free(vec2);
    return;
}

void test_zdotc_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    double _Complex* vec2 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zdotc(3, vec1, 1, vec2, 1);
    print_test_result(errno != ENOSYS, "zdotc");
    free(vec1);
    free(vec2);
    return;
}

void test_snrm2_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    snrm2(3, vec1, 1);
    print_test_result(errno != ENOSYS, "snrm2");
    free(vec1);
    return;
}

void test_dnrm2_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    dnrm2(3, vec1, 1);
    print_test_result(errno != ENOSYS, "dnrm2");
    free(vec1);
    return;
}

void test_scnrm2_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    scnrm2(3, vec1, 1);
    print_test_result(errno != ENOSYS, "scnrm2");
    free(vec1);
    return;
}

void test_dznrm2_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    dznrm2(3, vec1, 1);
    print_test_result(errno != ENOSYS, "dznrm2");
    free(vec1);
    return;
}

void test_sasum_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    sasum(3, vec1, 1);
    print_test_result(errno != ENOSYS, "sasum");
    free(vec1);
    return;
}

void test_dasum_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    dasum(3, vec1, 1);
    print_test_result(errno != ENOSYS, "dasum");
    free(vec1);
    return;
}

void test_scasum_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    scasum(3, vec1, 1);
    print_test_result(errno != ENOSYS, "scasum");
    free(vec1);
    return;
}

void test_dzasum_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    dzasum(3, vec1, 1);
    print_test_result(errno != ENOSYS, "dzasum");
    free(vec1);
    return;
}

void test_isamax_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    isamax(3, vec1, 1);
    print_test_result(errno != ENOSYS, "isamax");
    free(vec1);
    return;
}

void test_idamax_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    idamax(3, vec1, 1);
    print_test_result(errno != ENOSYS, "idamax");
    free(vec1);
    return;
}

void test_icamax_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    icamax(3, vec1, 1);
    print_test_result(errno != ENOSYS, "icamax");
    free(vec1);
    return;
}

void test_izamax_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    izamax(3, vec1, 1);
    print_test_result(errno != ENOSYS, "izamax");
    free(vec1);
    return;
}

void test_srotg_implemented(){
    errno = 0;
    float C, S;
    srotg(0.0,0.0,&C, &S);
    print_test_result(errno != ENOSYS, "srotg");
}

void test_drotg_implemented(){
    errno = 0;
    double C, S;
    drotg(0.0,0.0,&C, &S);
    print_test_result(errno != ENOSYS, "drotg");
}

void test_crotg_implemented(){
    errno = 0;
    float C;
    float _Complex S;
    crotg(_Complex_I,_Complex_I,&C, &S);
    print_test_result(errno != ENOSYS, "crotg");
}

void test_zrotg_implemented(){
    errno = 0;
    double C;
    double _Complex S;
    zrotg((double _Complex)_Complex_I,(double _Complex)_Complex_I,&C, &S);
    print_test_result(errno != ENOSYS, "zrotg");
}

void test_srot_implemented(){
    errno = 0;
    float* vec1 = (float*)(calloc(3, sizeof(float)));
    float* vec2 = (float*)(calloc(3, sizeof(float)));
    srot(3, vec1, 1, vec2, 1, 0.0, 0.0);
    print_test_result(errno != ENOSYS, "srot");
    free(vec1);
    free(vec2);
    return;
}

void test_drot_implemented(){
    errno = 0;
    double* vec1 = (double*)(calloc(3, sizeof(double)));
    double* vec2 = (double*)(calloc(3, sizeof(double)));
    drot(3, vec1, 1, vec2, 1, 0.0, 0.0);
    print_test_result(errno != ENOSYS, "drot");
    free(vec1);
    free(vec2);
    return;
}

void test_crot_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    float _Complex* vec2 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    crot(3, vec1, 1, vec2, 1, 0.0, _Complex_I);
    print_test_result(errno != ENOSYS, "crot");
    free(vec1);
    free(vec2);
    return;
}

void test_zrot_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    double _Complex* vec2 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zrot(3, vec1, 1, vec2, 1, 0.0, (double _Complex)_Complex_I);
    print_test_result(errno != ENOSYS, "zrot");
    free(vec1);
    free(vec2);
    return;
}

void test_csrot_implemented(){
    errno = 0;
    float _Complex* vec1 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    float _Complex* vec2 = (float _Complex*)(calloc(3, sizeof(float _Complex)));
    csrot(3, vec1, 1, vec2, 1, _Complex_I, _Complex_I);
    print_test_result(errno != ENOSYS, "csrot");
    free(vec1);
    free(vec2);
    return;
}

void test_zdrot_implemented(){
    errno = 0;
    double _Complex* vec1 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    double _Complex* vec2 = (double _Complex*)(calloc(3, sizeof(double _Complex)));
    zdrot(3, vec1, 1, vec2, 1, (double _Complex)_Complex_I, (double _Complex)_Complex_I);
    print_test_result(errno != ENOSYS, "zdrot");
    free(vec1);
    free(vec2);
    return;
}


int main(int argc, char** argv){
    printf("Running file: check_implemented.c");

    // axpy implementation tests
    test_saxpy_implemented();
    test_daxpy_implemented();
    test_caxpy_implemented();
    test_zaxpy_implemented();

    // scal implementation tests
    test_sscal_implemented();
    test_dscal_implemented();
    test_cscal_implemented();
    test_zscal_implemented();

    // copy implementation tests
    test_scopy_implemented();
    test_dcopy_implemented();
    test_ccopy_implemented();
    test_zcopy_implemented();

    // swap implementation tests
    test_sswap_implemented();
    test_dswap_implemented();
    test_cswap_implemented();
    test_zswap_implemented();

    // dot implementation tests
    test_sdot_implemented();
    test_ddot_implemented();
    test_cdotu_implemented();
    test_zdotu_implemented();
    test_cdotc_implemented();
    test_zdotc_implemented();

    // nrm2 implementation tests
    test_snrm2_implemented();
    test_dnrm2_implemented();
    test_scnrm2_implemented();
    test_dznrm2_implemented();

    // asum implementation tests
    test_sasum_implemented();
    test_dasum_implemented();
    test_scasum_implemented();
    test_dzasum_implemented();

    // i_amax implementation tests
    test_isamax_implemented();
    test_idamax_implemented();
    test_icamax_implemented();
    test_izamax_implemented();

    // rotg implementation tests
    test_srotg_implemented();
    test_drotg_implemented();
    test_crotg_implemented();
    test_zrotg_implemented();

    // rot implementation tests
    test_srot_implemented();
    test_drot_implemented();
    test_crot_implemented();
    test_zrot_implemented();
    test_csrot_implemented();
    test_zdrot_implemented();


    printf("Number of functions implemented: %s(%d/%d)\e[0m\n", number_of_tests == tests_successful ? "\e[32m" : "\e[31m", tests_successful, number_of_tests);

    return (number_of_tests == tests_successful) ? 0 : 1;
}