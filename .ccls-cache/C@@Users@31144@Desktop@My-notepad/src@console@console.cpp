#include "../../include/notepad.hpp"
bool instructions::execute_instruction(instruction *instructions_name,std::vector<std::string>instruction_suffix){
    for(auto &it : instruction_master)
        if(it->get_instructionName() == instructions_name->get_instructionName()){
            if(instruction_suffix.empty())
                return it->implement();
            else
                return it->implement(instruction_suffix);
        }
    return true;
}