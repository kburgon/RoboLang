#include "RoboShell.hpp"

RoboShell::RoboShell()
{
    rawCommand = "";
}

int RoboShell::startPrompt()
{
    Parser roboParse;
    std::vector<std::string> command;
    int cmdNum = 0;
    do
    {
        command.erase(command.begin(), command.end());
        std::cout << "[cmd-" << cmdNum << "]$ ";
        std::getline(std::cin, rawCommand);
        command = roboParse.parseString(rawCommand);
        for (auto indPar:command)
        {
            std::cout << "[" << indPar << "]" << std::endl;
        }
        ++cmdNum;
    } while (command.front() != "exit");
    return 0;
}
