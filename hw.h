#include "src.h"
#include <hls_stream>

void hw_top(ap_unit<64>* inst_mem
            ap_unit<64>* reg_file,
            ap_unit<64>* data_mem,
            ap_unit<2>* status);
