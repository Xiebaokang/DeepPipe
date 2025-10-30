/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: DeepPipeDialect.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace deepPipe {

class DeepPipeDialect : public ::mlir::Dialect {
  explicit DeepPipeDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~DeepPipeDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("deepPipe");
  }

  /// Parse an attribute registered to this dialect.
  ::mlir::Attribute parseAttribute(::mlir::DialectAsmParser &parser,
                                   ::mlir::Type type) const override;

  /// Print an attribute registered to this dialect.
  void printAttribute(::mlir::Attribute attr,
                      ::mlir::DialectAsmPrinter &os) const override;
};
} // namespace deepPipe
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::deepPipe::DeepPipeDialect)
