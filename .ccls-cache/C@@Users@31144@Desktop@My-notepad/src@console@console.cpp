#include "../../include/notepad.hpp"

bool instructions::execute_instruction(instruction *instructions_name){
    for(auto &it : instruction_master)
        if(it.get_instructionName() == instructions_name->get_instructionName()){
            if(it.get_instructionName() == "exit"){
                ;
            }
            else if(){

            }
            else
                it.implement();
            return 0;
        }
    return true;
}