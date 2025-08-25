{ pkgs ? import <nixpkgs> {} }:
    
pkgs.mkShell {

  nativeBuildInputs = with pkgs.buildPackages; [ 
    gcc
  ];
  CC="gcc";
  CFLAGS = "-Wall";
  LDFLAGS = "";
  LDLIBS = "-lm";
  SRC_DIR = "./src/";
  BUILD_DIR = "./build/";
  BIN_DIR = "./bin/";
}