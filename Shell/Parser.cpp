#include "Parser.hpp"

// Private functions

void Parser::parse()
{
    std::string temp;
    std::vector<std::string> parsedList;
    bool newWord = true;
    for (auto&& inChar:rawString)
    {
        if (inChar == ' ')
        {
                newWord = true;
        }
        else
        {
            if (newWord)
            {
                    temp = inChar;
                    parsedList.push_back(temp);
                    newWord = false;
            }
            else
            {
                    temp = inChar;
                    parsedList[parsedList.size() - 1] += temp;
            }
        }
    }
    parsedStr = parsedList;
}

// Public functions

Parser::Parser()
{
    loadString("");
}

Parser::Parser(std::string toParse)
{
    loadString(toParse);
}

void Parser::loadString(std::string toParse)
{
    // std::cout << "Loaded String..";
    rawString = toParse;
    // std::cout << "finished.\n";
}

std::vector<std::string> Parser::parseString()
{
    parse();
    return parsedStr;
}

std::vector<std::string> Parser::parseString(std::string toParse)
{
    loadString(toParse);
    parse();
    return parsedStr;
}
