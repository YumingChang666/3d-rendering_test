# Set kernel name
KERNEL_NAME = rendering

# Set host source and headers
#HOST_SRC_CPP = ./src/host/3d_rendering_host.cpp ./src/host/utils.cpp ./src/host/check_result.cpp
#HOST_SRC_H   = ./src/host/utils.h ./src/host/check_result.h ./src/host/typedefs.h ./src/host/input_data.h
HOST_SRC_CPP = ./src/host/3d_rendering_host.c ./src/host/utils.c ./src/host/check_result.c
HOST_SRC_H   = ./src/host/utils.h ./src/host/check_result.h ./src/host/typedefs.h ./src/host/input_data.h
DATA         =

# Set kernel file
#SW_KERNEL_SRC = ./src/sw/rendering_sw.cpp
SW_KERNEL_SRC = ./src/sw/rendering_sw.c
SW_KERNEL_H = ./src/host/typedefs.h ./src/sw/rendering_sw.h

#-------------------------
# Leave the rest to harness
#-------------------------
include harness/harness.mk