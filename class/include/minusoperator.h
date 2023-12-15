class vector
{
    private:
        double x,y,z;
    public:
        vector(double x=0, double y=0, double z=0):x(x), y(y), z(z){}
        vector operator-();
        void display();
};