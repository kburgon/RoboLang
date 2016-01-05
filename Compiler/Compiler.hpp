#ifndef COMPILER_HPP
#define COMPILER_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Compiler
{
private:
    std::vector<std::string> commands;
public:
    Compiler();
    Compiler(std::string filename);
    void loadFile(std::string filename);
    void printCommands();
};

#endif
