## Setup

On Windows:
* Go to pytorch.org to obtain an installation command line using `conda`. It will also suggest what CUDA SDK versions are available.
* Install CUDA SDK from the Torch command line, e.g. version 12.4 was used for this walkthrough.
* Install Visual Studio and C++/Cmake components (I used the latest 2022 which was available for my OS - Windows 10).
* Using the proposed conda cmd and pip, install `torch` and `torchvision` using extra URL index pointint to the CUDA version, e.g. `cu124` (this will be just a copy from the website). My line: `pip3 install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/cu124`.
* You might need to use Conda terminal, not VSC for all the builds and python runs.

## Build 

* Compile C++ bridge (somehow `pybind` is already within the environment?): `pip3 install .` - it will use the `setup.py` where the compilation rules are defined. 
* Run the test file from activated conda environment: `python test.py`.

## Troubleshooting

* Version compatiblity is very important for: Torch, CUDA SDK, as well as MSVC (C++ build tools).