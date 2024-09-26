// ensure that urAdapterRelease is called

// RUN: %if run-mode %{ env SYCL_UR_TRACE=2 sycl-ls | FileCheck %s %}
// CHECK: ---> urAdapterRelease
