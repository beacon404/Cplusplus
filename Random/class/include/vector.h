#pragma once
class vector
{
    private:
        int x;
        int y;
        int z;
    public:
        vector add(vector);
        vector (int, int, int);
        int getx();
        int gety();
        int getz();
};