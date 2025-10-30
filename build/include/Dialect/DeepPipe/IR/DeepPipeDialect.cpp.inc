/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: DeepPipeDialect.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::deepPipe::DeepPipeDialect)
namespace mlir {
namespace deepPipe {

DeepPipeDialect::DeepPipeDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<DeepPipeDialect>())
    
     {
  getContext()->loadDialect<::mlir::affine::AffineDialect>();
  getContext()->loadDialect<::mlir::func::FuncDialect>();
  getContext()->loadDialect<::mlir::arith::ArithDialect>();
  getContext()->loadDialect<::mlir::math::MathDialect>();
  getContext()->loadDialect<::mlir::scf::SCFDialect>();
  getContext()->loadDialect<::mlir::cf::ControlFlowDialect>();
  initialize();
}

DeepPipeDialect::~DeepPipeDialect() = default;

} // namespace deepPipe
} // namespace mlir
