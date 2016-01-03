#include "RoboShell.hpp"

RoboShell::RoboShell()
{
    rawCommand = "";
}

int RoboShell::startPrompt()
{
    Parser roboParse;
    std::vector<std::string> command;
    do
    {
        command.erase(command.begin(), command.end());
        std::cout << "[cmd]$ ";
        std::getline(std::cin, rawCommand);
        command = roboParse.parseString(rawCommand);
        for (auto indPar:command)
        {
            std::cout << "[" << indPar << "]" << std::endl;
        }
    } while (command.front() != "exit");
    return 0;
}
