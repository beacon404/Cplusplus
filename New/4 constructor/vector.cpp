#include<iostream>
using namespace std;


class Vector{
    private:
        double i,j,k;
    public:
        Vector(double i, double j, double k): i(i), j(j),k(k){};

        void sum(double &ni, double &nj, double &nk, Vector &another);

        ~Vector() {
        cout << "Vector object destroyed." << endl;
    }
        


};

void Vector::sum(double &ni, double &nj, double &nk, Vector &another){

    ni= this->i + another.i;
    nj= this->j + another.j;
    nk= this->k + another.k;

}

int main() {
    Vector v1(1,2,3);
    Vector v2(1,2,3);
    double ni,nj,nk;
    v1.sum(ni,nj,nk,v2) ;
    cout << ni << nj <<nk<<endl;
    return 0;
    
}