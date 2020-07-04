#include <string>
class instruction{
    public:
    virtual void implement() = 0;
    virtual void implcement(std::string suffix,...) = 0;
    protected:
    std::string instruction_name;
};

class instructions{
    public:
    bool execute_instruction(instruction *instructions_name,...);
};