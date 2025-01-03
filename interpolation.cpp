#include <torch/extension.h>
#include "utils.h"

torch::Tensor trilinear_interpolation(torch::Tensor feats, torch::Tensor points)
{
    CHECK_INPUT(feats);
    CHECK_INPUT(points);

    // cuda implementation goes here
    return trilinear_fw_cu(feats, points);
}

// python interface for the function calls
PYBIND11_MODULE(TORCH_EXTENSION_NAME, m){
    m.def("trilinear_interpolation", trilinear_interpolation);
}