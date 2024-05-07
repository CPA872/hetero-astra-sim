#ifndef __TPU_MODEL_HH__
#define __TPU_MODEL_HH__

#include "astra-sim/system/AstraComputeAPI.hh"
using namespace AstraSim;

class TPUModel : public AstraComputeAPI {

  // timespec_t get_static_runtime(ComputeKernel &kernel) override;
  void simulate(
    ComputeKernel &kernel,
    Sys *sys,
    void (*msg_handler)(void* fun_arg),
    ComputeKernelSimulationMetaData* fun_arg) override;

  
  
  ~TPUModel() {};
};


#endif