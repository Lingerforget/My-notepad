#ifndef _SAVE_HPP_
#define _SAVE_HPP_
#include "instructions.hpp"
class save:public instruction{
    public:
    virtual bool implement();
    virtual bool implement(std::vector<std::string>instruction_suffix);
    virtual std::string get_instructionName(){return "save";}
};
bool save::implement(){
    return false;
}
bool save::implement(std::vector<std::string>instruction_suffix){
    return true;
}
#endif