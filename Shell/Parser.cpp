#include "Parser.hpp"

// Private functions

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
    rawString = toParse;
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
