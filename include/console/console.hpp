#ifndef _CONSOLE_HPP_
#define _CONSOLE_HPP_
#include <Windows.h>
#include "./instructions/instruction_master.hpp"
/*
 *Because only one line of input is required and no caching is required, the console does not write screen cached output
 */
class instructions{
    public:
    bool execute_instruction(instruction *instructions_name,std::vector<std::string> suffix);
};
class console{
    public:
        console();
        void input();
        void output();
};
#endif