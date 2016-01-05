#include <iostream>
#include <string>
#include <vector>
#include "./Shell/RoboShell.hpp"

int main(int argc, char const *argv[]) {
    // std::cout << "Begin RoboLang" << std::endl;
    if (argc == 1)
    {
        RoboShell mainShell;
        mainShell.startPrompt();
    }
    else // to open and run file.  Will be implemented later
    {
        std::cout << "Opening file \"" << argv[1] << "\"" << std::endl;
    }
    
    return 0;
}
