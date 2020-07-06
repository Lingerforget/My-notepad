#ifndef _EXIT_HPP_
#define _EXIT_HPP_
#include "instructions.hpp"
class EXIT:public instruction{
    public:
    virtual bool implement();
    virtual bool implement(std::vector<std::string>instruction_suffix);
    virtual std::string get_instructionName(){return "exit";}
};
bool EXIT::implement(){
    return false;
}
bool EXIT::implement(std::vector<std::string>instruction_suffix){
    return true;
}
#endif