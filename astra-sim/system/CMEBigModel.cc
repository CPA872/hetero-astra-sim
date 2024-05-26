#include "CMEBigModel.hh"

std::string CMEBigModel::get_type() {
  return "CME_BIG";
};

timespec_t CMEBigModel::get_static_runtime(ComputeKernel &kernel) {
  switch (kernel.type)
  {
  case ComputeKernelType::GEMM:
    break;

  case ComputeKernelType::Batch_GEMM:
    break;
  
  case ComputeKernelType::Llama_Attn:

    break;

  case ComputeKernelType::Llama_MLP:
    break;
  
  default:
    break;
  }
}

// CMEBigModel::~CMEBigModel() {}