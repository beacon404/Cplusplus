#pragma once
enum Grade{
    A, A_,B, F
};
class student{
    private:
        Grade g;
    public:
        void setgrade(int);
        int getgrade();
};
