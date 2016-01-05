#include "Compiler.hpp"

Compiler::Compiler()
{

}

Compiler::Compiler(std::string filename)
{
    loadFile(filename);
}

void Compiler::loadFile(std::string filename)
{
    std::ifstream fin(filename);
    std::string indCommand;
    while (fin.good())
    {
        fin >> indCommand;
        commands.push_back(indCommand);
    }
}

void Compiler::printCommands()
{
    for (auto cmd:commands)
    {
        std::cout << "<" << cmd << ">" << std::endl;
    }
}
