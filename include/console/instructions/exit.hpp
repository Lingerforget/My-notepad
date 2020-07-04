#include "./instructions.hpp"
class exit:public instruction{
    public:
    exit(){
        instruction_name = "exit";
    }
    void implement();
};
void exit::implement(){

}