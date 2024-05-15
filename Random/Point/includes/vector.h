#pragma once
class vector
{
    private:
        int x;
        int y;
        int z;
    
    public:
        vector(int x, int y, int z);
        vector add(vector);
        int getx();
        int gety();
        int getz();

};
