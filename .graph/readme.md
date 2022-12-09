# Parallel
`cmake --build <dir> --parallel [<number-of-jobs>]`

# Clean
This will remove all artifacts from the build directory. You can call it like this:  
`cmake --build <dir> -t clean`

if you'd like to clean first and then implement a normal build:  
`cmake --build <dir> --clean-first`
