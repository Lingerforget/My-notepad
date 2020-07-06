#ifndef _INPUT_HPP_
#define _INPUT_HPP_
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <conio.h>
class input{
    public:
    input(std::vector<std::string> init_input);
    input();
    void keyboard_input();
    std::vector<std::string> get_cache_input();
    void reset_cache();
    private:
    std::vector<std::string> cache_input;
};
/*
 *It is redefined here. The original output to the file is changed to output the input to the file.
 */
class input_tofile{
    public:
    input_tofile(std::string file_route,std::string file_name){
        this->file_route = file_route;
        this->file_name = file_name;
    }
    input_tofile();
    void new_file();
    void save(input *keyboard_input);
    private:
     std::string file_route;
     std::string file_name;
};
#endif