python3 -m chakra.et_converter.et_converter \
--input_type Text \
--input_filename ASTRA-sim-1.0/MLP_ModelParallel.txt \
--output_filename ASTRA-sim-2.0/MLP_ModelParallel/MLP_ModelParallel \
--num_npus 2 \
--num_passes 1
