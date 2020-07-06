#ifndef _INSTRUCTION_HPP_
#define _INSTRUCTION_HPP_
#include <string>
#include <vector>
class instruction{
    public:
    virtual bool implement()=0;//Command without suffix
    virtual bool implement(std::vector<std::string>instruction_suffix)=0;//Commands with suffix
    virtual std::string get_instructionName()=0;
};
#endif