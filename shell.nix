{ pkgs ? import <nixpkgs> {} }:
    
pkgs.mkShell {

  nativeBuildInputs = with pkgs.buildPackages; [ 
    gcc
  ];
  CC="gcc";
  CFLAGS = "-I${builtins.toString ./.}/include -Wall";
  LDFLAGS = "";
  LD_LIBRARY_PATH="${builtins.toString ./.}/bin";
  TEST_LD_FLAGS = "-L${builtins.toString ./.}/bin";
  TEST_LD_LIBS = "-lmatrix-c";
  LDLIBS = "-lm";
  SRC_DIR = "./src/";
  BUILD_DIR = "./build/";
  BIN_DIR = "./bin/";

}