# CMake Generator: for CodeBlocks
"using Cmake with Code::Blocks"  
https://stackoverflow.com/questions/43501490/using-cmake-with-codeblocks

```mkdir build
cmake -B build -S . -G"CodeBlocks - Unix Makefiles"
```

OR
`cmake -G "CodeBlocks - Unix Makefiles" ../src`
