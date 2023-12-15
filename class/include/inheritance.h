#pragma once
#include<string>
class person
{
    private:
        long id;
    public:
        std::string name;
        std::string getname();
        
};
class student: private person
{
    private:
        std:: string group;
        std::string batch;
    public:
        void print();
        std::string getgroup();
        std::string setgroup(std::string);
        std::string setname(std::string);
};
