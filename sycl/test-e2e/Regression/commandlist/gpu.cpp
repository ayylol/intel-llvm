// REQUIRES: gpu, linux

// RUN: %clangxx %{amd_arch} -Wno-error=vla-cxx-extension -fsycl -fsycl-targets=%{sycl_triple} %S/Inputs/FindPrimesSYCL.cpp %S/Inputs/main.cpp -o %t.out -lpthread
// RUN: %{run} %t.out
