#include "../../include/notepad.hpp"

file_output::file_output(std::string open_file_route){
    std::ifstream open_file(open_file_route,std::ios::in);
    std::vector<std::string> file;
    std::string temp;
    while(open_file >> temp)
        file.push_back(temp);
    for(auto &it : file)
        {
            init_input.push_back(it);
            std::cout<<it;
        }
    open_file.close();
    std::vector<std::string>().swap(file);
}
