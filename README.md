# Notes

On Windows:
* Install CUDA SDK, e.g. version 12.1.
* Install Visual Studio and C++/Cmake components.
* Using conda and pip, install `torch` and `torchvision` using extra URL index pointint to the CUDA version, e.g. `cu121`.
* You might need to use Conda terminal, not VSC for all the builds and python runs.
* Compile C++ bridge (somehow `pybind` is already within the environment?): `pip install .` - it will use the `setup.py`. 
* Run the test file from activated conda environment: `python test.py`.