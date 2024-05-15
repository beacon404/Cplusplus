#include <iostream>
class Base
{
    public:
    virtual ~Base(){    }
    virtual Base* create() const {
        std::cout <<  "Base created" << std::endl;
        return new Base();
    }
};
class Derived : public Base{

};

int main()
{
    return 0;
}