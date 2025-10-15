#include "ffi.h"

PYBIND11_MODULE(deepPipe_ffi, m) {
  m.doc() = "TODO";
  mlir::deepPipe::init_ffi_ir(m.def_submodule("ir"));
  // mlir::deepPipe::init_ffi_passes(m.def_submodule("passes"));
}