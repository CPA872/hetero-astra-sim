#include "astra-sim/system/A100Model.hh"

void A100Model::simulate(
    ComputeKernel &kernel,
    Sys *sys,
    void (*msg_handler)(void* fun_arg),
    ComputeKernelSimulationMetaData* fun_arg) {
  switch (kernel.type)
  {
  case ComputeKernelType::GEMM:
    break;
  
  default:
    break;
  }
}
