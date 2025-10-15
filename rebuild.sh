#!/bin/bash
cd build
rm -rf *
cmake  .. -GNinja \
  -DCMAKE_BUILD_TYPE=Debug  \
  -DCMAKE_LINKER=lld  \
  -DLLVM_ENABLE_ASSERTIONS=ON  \
  -DMLIR_DIR=/data1/xiebaokang/llvm-project/build/lib/cmake/mlir

ninja

cp ./deepPipe_ffi.cpython-310-x86_64-linux-gnu.so ../python/DeepPipe

cd ..