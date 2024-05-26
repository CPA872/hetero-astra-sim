#! /bin/bash -v

# Absolue path to this script
ASTRA_ROOT=/home/cx872/Documents/ucsd/cxl-llm/hetero-astra-sim
SCRIPT_DIR=$(dirname "$(realpath $0)")

# Absolute paths to useful directories
BINARY="${ASTRA_ROOT}"/build/astra_analytical/build/bin/AstraSim_Analytical_Congestion_Aware
NETWORK="${ASTRA_ROOT}"/inputs/network/analytical/1GPU1CMEBIG.yml
SYSTEM="${ASTRA_ROOT}"/inputs/system/FullyConnected.json
WORKLOAD="${ASTRA_ROOT}"/inputs/workload/ASTRA-sim-2.0/llama_test/llama_test
REMOTE_MEMORY="${ASTRA_ROOT}"/inputs/remote_memory/analytical/no_memory_expansion.json
STATS="${ASTRA_ROOT}"/examples/results

rm -rf "${STATS}"
mkdir "${STATS}"

"${BINARY}" \
--network-configuration="${NETWORK}" \
--system-configuration="${SYSTEM}" \
--workload-configuration="${WORKLOAD}" \
--remote-memory-configuration=${REMOTE_MEMORY} \
--compute-model="compute-api" \
--path="${STATS}/" \
--run-name="sample_all_reduce" \
--num-passes=1 \
--comm-scale=50 \
--total-stat-rows=1 \
--stat-row=0 