set(MLIR_BINARY_DIR ${CMAKE_BINARY_DIR})

set(LLVM_TARGET_DEFINITIONS DeepPipeOps.td)
mlir_tablegen(DeepPipeOps.h.inc -gen-op-decls)
mlir_tablegen(DeepPipeOps.cpp.inc -gen-op-defs)
add_mlir_doc(DeepPipeOps DeepPipeOps DeepPipe/ -gen-op-doc)

set(LLVM_TARGET_DEFINITIONS DeepPipeDialect.td)
mlir_tablegen(DeepPipeDialect.h.inc -gen-dialect-decls)
mlir_tablegen(DeepPipeDialect.cpp.inc -gen-dialect-defs)
add_mlir_doc(DeepPipeDialect DeepPipeDialect DeepPipe/ -gen-dialect-doc)

add_public_tablegen_target(DeepPipeTableGen)