#ifndef __A100_MODEL_HH__
#define __A100_MODEL_HH__


#include "astra-sim/system/AstraComputeAPI.hh"
using namespace AstraSim;

class A100Model : public AstraComputeAPI {

  // timespec_t get_static_runtime(ComputeKernel &kernel) override;

  timespec_t get_static_runtime(ComputeKernel &kernel) override;

  std::string get_type() override;

  
  // ~A100Model() override {};
};


#endif