#ifndef __CME_BIG_HH__
#define __CME_BIG_HH__

#include "astra-sim/system/AstraComputeAPI.hh"
using namespace AstraSim;

class CMEBigModel : public AstraComputeAPI {

  // timespec_t get_static_runtime(ComputeKernel &kernel) override;

  // void simulate(
  //   ComputeKernel &kernel,
  //   Sys *sys,
  //   void (*msg_handler)(void* fun_arg),
  //   ComputeKernelSimulationMetaData* fun_arg) override;
  
  timespec_t get_static_runtime(ComputeKernel &kernel) override;

  std::string get_type() override;

  ~CMEBigModel() override {}
};


#endif