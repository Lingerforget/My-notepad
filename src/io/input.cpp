#include "../../include/io/input.hpp"
input::input(std::vector<std::string> init_input)
{

}
void input::keyboard_input(){
    if(_kbhit()){ 
        std::string temp(1,_getch());
        this->cache_input.push_back(temp);
    }
}     
std::vector<std::string> input::get_cache_input(){
    return this->cache_input;
}
void input::reset_cache(){
    std::vector<std::string>().swap(cache_input);
}
void input_tofile::save(input *keyboard_input){
    if(this->file_route.empty() || this->file_name.empty()){ 
        ;
    }
    std::ofstream input_to_file((this->file_route +file_name),std::ios::out);
    for(auto it : keyboard_input->get_cache_input())
        input_to_file << it;
    keyboard_input->reset_cache();
    input_to_file.close();
}