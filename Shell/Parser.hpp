#ifndef PARSER
#define PARSER

#include <string>
#include <vector>
#include <iostream>

class Parser
{
private:
    std::string rawString;
    std::vector<std::string> parsedStr;
    void parse();
public:
    Parser();
    Parser(std::string);
    void loadString(std::string toParse);
    std::vector<std::string> parseString();
    std::vector<std::string> parseString(std::string toParse);
    std::vector<std::string> getParsedStr();
};

#endif
