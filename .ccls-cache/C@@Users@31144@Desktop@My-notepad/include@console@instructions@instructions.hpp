#include <string>
class instruction{
    public:
    virtual void implement() = 0;
    virtual void implcement(std::string suffix,...) = 0;
    std::string get_instructionName(){return this->instruction_name;}
    protected:
    std::string instruction_name;
};
