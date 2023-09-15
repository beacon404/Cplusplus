#include "vector.h"
vector::vector(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
vector vector::add(vector v1)
{
    
    int x= v1.getx()+this->x;
    int y= v1.gety()+this->y;
    int z= v1.getz()+this->z;
    vector v3(x,y,z);
    return v3;
}
int vector::getx()
{
    return x;
}
int vector::gety()
{
    return y;
}
int vector::getz()
{
    return z;
}