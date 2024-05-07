#include "TPUModel.hh"

void TPUModel::simulate(
    ComputeKernel &kernel,
    Sys *sys,
    void (*msg_handler)(void* fun_arg),
    ComputeKernelSimulationMetaData* fun_arg) {
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