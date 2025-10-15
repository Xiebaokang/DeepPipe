#ifndef DEEPPIPE_DIALECT
#define DEEPPIPE_DIALECT

include "mlir/IR/OpBase.td"


def DeepPipe_Dialect : Dialect {
  let name = "deepPipe";

  let cppNamespace = "::mlir::deepPipe";

  let summary = "DeepPipe Dialact in MLIR";

  let description = [{
    DeepPipe Dialect.
  }];

  let dependentDialects = [
    "::mlir::affine::AffineDialect",
    "::mlir::func::FuncDialect",
    "::mlir::arith::ArithDialect",
    "::mlir::math::MathDialect",
    "::mlir::scf::SCFDialect",
    "::mlir::cf::ControlFlowDialect"
  ];

  let useDefaultAttributePrinterParser = 1;
}

#endif // DEEPPIPE_DIALECT