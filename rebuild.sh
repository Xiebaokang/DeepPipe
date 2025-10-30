#!/bin/bash
cd build
rm -rf *
cmake  .. -GNinja \
  -DCMAKE_BUILD_TYPE=Debug  \
  -DCMAKE_LINKER=lld  \
  -DLLVM_ENABLE_ASSERTIONS=ON  \
  -DMLIR_DIR=/home/xiebaokang/software/installs/lib/cmake/mlir

ninja

cp ./deepPipe_ffi.cpython-310-x86_64-linux-gnu.so ../python/DeepPipe

cd ..