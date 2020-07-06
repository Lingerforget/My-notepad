#ifndef _INSTRUCTION_MASTER_HPP_
#define _INSTRUCTION_MASTER_HPP_
#include "exit.hpp"
#include "move.hpp"
#include "save.hpp"
#include <vector>
std::vector<instruction*> instruction_master;
void environment_variable_init(void);
#endif