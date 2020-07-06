#ifndef _MOVE_HPP_
#define _MOVE_HPP_
#include "instructions.hpp"
class move:public instruction{
    public:
    virtual bool implement();
    virtual bool implement(std::vector<std::string>instruction_suffix);
    virtual std::string get_instructionName(){return "move";}
};
bool move::implement(){
    return true;
}
bool move::implement(std::vector<std::string>instruction_suffix){
    return false;
}
#endif