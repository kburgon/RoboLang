#ifndef ROBOSHELL
#define ROBOSHELL

#include <iostream>
#include <string>
#include <vector>
#include "Parser.hpp"

class RoboShell
{
private:
    std::string rawCommand;
public:
    RoboShell();
    int startPrompt();
};

#endif
