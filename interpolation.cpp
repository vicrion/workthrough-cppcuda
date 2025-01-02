#include <torch/extension.h>

torch::Tensor trilinear_interpolation(torch::Tensor feats, torch::Tensor point)
{
    // cuda implementation goes here
    return feats;
}

// python interface for the function calls
PYBIND11_MODULE(TORCH_EXTENSION_NAME, m){
    m.def("trilinear_interpolation", trilinear_interpolation);
}