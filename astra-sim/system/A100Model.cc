#include "astra-sim/system/A100Model.hh"

std::string A100Model::get_type() {
  return "A100";
};


timespec_t A100Model::get_static_runtime(ComputeKernel &kernel) {
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

// A100Model::~A100Model() {}
