# C++ Tools
A minimal cmake project with a library and corresponding gtest unit tests. 

# Usage
1. Modify [main.cpp](main.cpp) as needed to do whatever you need to do (like read data from a file and run it through the probability functions)
1. Build & test (Ubuntu):
    1. `mkdir build && cd build`
    1. `cmake ../.`
    1. `cmake --build . && ctest -V` 
        * *Tip: specify jobs to speed up build. Example for a cpu with 16 threads :* `cmake --build . -j 16 && ctest -V` 
1. Run: `./Main`
