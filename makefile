float_objects = saxpy.o sscal.o scopy.o sswap.o sdot.o snrm2.o sasum.o isamax.o srotg.o srot.o srotmg.o srotm.o sgemv.o ssymv.o strmv.o strsv.o sger.o ssyr.o ssyr2.o
double_objects = daxpy.o dscal.o dcopy.o dswap.o ddot.o dnrm2.o dasum.o idamax.o drotg.o drot.o drotmg.o drotm.o dgemv.o dsymv.o dtrmv.o dtrsv.o dger.o dsyr.o dsyr2.o 
complex_objects = caxpy.o cscal.o ccopy.o cswap.o cdotu.o cdotc.o scnrm2.o scasum.o icamax.o crotg.o crot.o csrot.o cgemv.o chemv.o ctrmv.o ctrsv.o cgeru.o cgerc.o cher.o cher2.o
double_complex_objects = zaxpy.o zscal.o zcopy.o zswap.o zdotu.o zdotc.o dznrm2.o dzasum.o izamax.o zrotg.o zrot.o zdrot.o zgemv.o zhemv.o ztrmv.o ztrsv.o zgeru.o zgerc.o zher.o zher2.o
other_objects = 
objects = $(float_objects) $(double_objects) $(complex_objects) $(double_complex_objects) $(other_objects)


all: $(objects) 
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -shared -o $(BIN_DIR)libmatrix-c.so $(addprefix $(BUILD_DIR),$(objects))

saxpy.o: 
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)saxpy.o -c $(SRC_DIR)saxpy.c

daxpy.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)daxpy.o -c $(SRC_DIR)daxpy.c

caxpy.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)caxpy.o -c $(SRC_DIR)caxpy.c

zaxpy.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zaxpy.o -c $(SRC_DIR)zaxpy.c

sscal.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)sscal.o -c $(SRC_DIR)sscal.c

dscal.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dscal.o -c $(SRC_DIR)dscal.c

cscal.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cscal.o -c $(SRC_DIR)cscal.c

zscal.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zscal.o -c $(SRC_DIR)zscal.c

scopy.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)scopy.o -c $(SRC_DIR)scopy.c

dcopy.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dcopy.o -c $(SRC_DIR)dcopy.c

ccopy.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ccopy.o -c $(SRC_DIR)ccopy.c

zcopy.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zcopy.o -c $(SRC_DIR)zcopy.c

sswap.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)sswap.o -c $(SRC_DIR)sswap.c

dswap.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dswap.o -c $(SRC_DIR)dswap.c

cswap.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cswap.o -c $(SRC_DIR)cswap.c

zswap.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zswap.o -c $(SRC_DIR)zswap.c

sdot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)sdot.o -c $(SRC_DIR)sdot.c

ddot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ddot.o -c $(SRC_DIR)ddot.c

cdotu.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cdotu.o -c $(SRC_DIR)cdotu.c

zdotu.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zdotu.o -c $(SRC_DIR)zdotu.c

cdotc.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cdotc.o -c $(SRC_DIR)cdotc.c

zdotc.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zdotc.o -c $(SRC_DIR)zdotc.c

snrm2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)snrm2.o -c $(SRC_DIR)snrm2.c

dnrm2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dnrm2.o -c $(SRC_DIR)dnrm2.c

scnrm2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)scnrm2.o -c $(SRC_DIR)scnrm2.c

dznrm2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dznrm2.o -c $(SRC_DIR)dznrm2.c

sasum.o: 
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)sasum.o -c $(SRC_DIR)sasum.c

dasum.o: 
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dasum.o -c $(SRC_DIR)dasum.c

scasum.o: 
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)scasum.o -c $(SRC_DIR)scasum.c 

dzasum.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dzasum.o -c $(SRC_DIR)dzasum.c

isamax.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)isamax.o -c $(SRC_DIR)isamax.c

idamax.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)idamax.o -c $(SRC_DIR)idamax.c

icamax.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)icamax.o -c $(SRC_DIR)icamax.c

izamax.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)izamax.o -c $(SRC_DIR)izamax.c

srotg.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)srotg.o -c $(SRC_DIR)srotg.c

drotg.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)drotg.o -c $(SRC_DIR)drotg.c

crotg.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)crotg.o -c $(SRC_DIR)crotg.c

zrotg.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zrotg.o -c $(SRC_DIR)zrotg.c

srot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)srot.o -c $(SRC_DIR)srot.c

drot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)drot.o -c $(SRC_DIR)drot.c

crot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)crot.o -c $(SRC_DIR)crot.c

zrot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zrot.o -c $(SRC_DIR)zrot.c

csrot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)csrot.o -c $(SRC_DIR)csrot.c

zdrot.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zdrot.o -c $(SRC_DIR)zdrot.c

srotmg.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)srotmg.o -c $(SRC_DIR)srotmg.c

drotmg.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)drotmg.o -c $(SRC_DIR)drotmg.c

srotm.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)srotm.o -c $(SRC_DIR)srotm.c

drotm.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)drotm.o -c $(SRC_DIR)drotm.c

sgemv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)sgemv.o -c $(SRC_DIR)sgemv.c

dgemv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dgemv.o -c $(SRC_DIR)dgemv.c

cgemv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cgemv.o -c $(SRC_DIR)cgemv.c

zgemv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zgemv.o -c $(SRC_DIR)zgemv.c

chemv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)chemv.o -c $(SRC_DIR)chemv.c

zhemv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zhemv.o -c $(SRC_DIR)zhemv.c

ssymv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ssymv.o -c $(SRC_DIR)ssymv.c

dsymv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dsymv.o -c $(SRC_DIR)dsymv.c

strmv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)strmv.o -c $(SRC_DIR)strmv.c

dtrmv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dtrmv.o -c $(SRC_DIR)dtrmv.c

ctrmv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ctrmv.o -c $(SRC_DIR)ctrmv.c

ztrmv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ztrmv.o -c $(SRC_DIR)ztrmv.c

strsv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)strsv.o -c $(SRC_DIR)strsv.c

dtrsv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dtrsv.o -c $(SRC_DIR)dtrsv.c

ctrsv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ctrsv.o -c $(SRC_DIR)ctrsv.c

ztrsv.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ztrsv.o -c $(SRC_DIR)ztrsv.c

sger.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)sger.o -c $(SRC_DIR)sger.c

dger.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dger.o -c $(SRC_DIR)dger.c

cgeru.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cgeru.o -c $(SRC_DIR)cgeru.c

zgeru.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zgeru.o -c $(SRC_DIR)zgeru.c

cgerc.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cgerc.o -c $(SRC_DIR)cgerc.c

zgerc.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zgerc.o -c $(SRC_DIR)zgerc.c

ssyr.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ssyr.o -c $(SRC_DIR)ssyr.c

dsyr.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dsyr.o -c $(SRC_DIR)dsyr.c

cher.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cher.o -c $(SRC_DIR)cher.c

zher.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zher.o -c $(SRC_DIR)zher.c

ssyr2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)ssyr2.o -c $(SRC_DIR)ssyr2.c

dsyr2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)dsyr2.o -c $(SRC_DIR)dsyr2.c

cher2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)cher2.o -c $(SRC_DIR)cher2.c

zher2.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)zher2.o -c $(SRC_DIR)zher2.c

test: all
	$(CC) $(CFLAGS) $(TEST_LD_FLAGS) $(TEST_LD_LIBS) $(LD_LIBS) -o $(BIN_DIR)check_implemented.out ./test/check_implemented.c


clean:
	rm -f $(BIN_DIR)*
	rm -f $(BUILD_DIR)*
