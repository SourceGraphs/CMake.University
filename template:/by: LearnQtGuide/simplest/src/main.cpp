#include <iostream>
#include <fmt/format.h>
#include "person.h"

int main(int, char**){
    std::cout << "Hello, from try!\n";

    fmt::println("The sky is blue 42");

    Person p;
    p.eat();
}

//from: [2024 C++ and CMake Setup in Visual Studio Code: A Step-by-Step Guide](https://youtu.be/4U-lnfxY2U0)