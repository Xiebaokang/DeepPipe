add_deepPipe_library(DeepPipeIR
  DeepPipOps.cpp

  DEPENDS
  DeepPipeTableGen

  LINK_LIBS PUBLIC
  MLIRIR
  MLIRArithDialect
  MLIRMathDialect
  MLIRSCFDialect
)