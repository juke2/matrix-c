{ pkgs ? import <nixpkgs> {} }:
    
pkgs.mkShell {

  nativeBuildInputs = with pkgs.buildPackages; [ 
    gcc
  ];
  CC="gcc";
  CFLAGS = "-Wall";
  LDFLAGS = "";
  LDLIBS = "-lm";
  BUILD_DIR = "./build/";
  BIN_DIR = "./bin/";
}