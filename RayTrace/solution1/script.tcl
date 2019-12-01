############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project RayTrace
set_top intersect_kernel
add_files src/bvh.h
add_files src/camera.h
add_files src/intersect.c
add_files src/intersect.h
add_files lib/mathc.h
add_files -tb src/bvh.c -cflags "-Wno-unknown-pragmas"
add_files -tb src/camera.c -cflags "-Wno-unknown-pragmas"
add_files -tb src/main.c -cflags "-Wno-unknown-pragmas"
add_files -tb lib/mathc.c
open_solution "solution1"
set_part {xczu3eg-sbva484-1-e} -tool vivado
create_clock -period 10 -name default
set_clock_uncertainty 1.25
#source "./RayTrace/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
