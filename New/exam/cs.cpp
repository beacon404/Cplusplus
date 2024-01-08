#include<iostream>
using namespace std;

// Forward declarations
class kilogramgram;

class massweight {
public:
    virtual void display() = 0;
};

class poundounces : public massweight {
private:
    double pound;
    double ounces;

public:
    poundounces() {}
    poundounces(double pound, double ounces) : pound(pound), ounces(ounces) {}

    virtual void display();
    
    friend poundounces convertmeasure(kilogramgram &);
    friend kilogramgram convertmeasure(poundounces &);
};

class kilogramgram {
private:
    double kilogram;
    double gram;

public:
    kilogramgram() {}
    kilogramgram(double kilogram, double gram) : kilogram(kilogram), gram(gram) {}

    virtual void display();
    
    friend poundounces convertmeasure(kilogramgram &);
    friend kilogramgram convertmeasure(poundounces &);
};

void poundounces::display() {
    cout << "pound: " << pound << " ounces: " << ounces << endl;
}

void kilogramgram::display() {
    cout << "kilogram: " << kilogram << " gram: " << gram << endl;
}

poundounces convertmeasure(kilogramgram &x) {
    poundounces y;
    double g = x.kilogram * 1000 + x.gram;
    double o = g * 35.27392 / 1000;
    int p = o / 16;
    y.pound = p;
    double ou = o - p * 16.0;
    y.ounces = ou;
    return y;
}

kilogramgram convertmeasure(poundounces &x) {
    kilogramgram y;
    double o = x.pound * 16 + x.ounces;
    double g = 1000 * o / 35.27392;
    int k = g / 1000;
    y.kilogram = k;
    double gm = g - k * 1000.0;
    y.gram = gm;
    return y;
}

int main() {
    kilogramgram k(3, 400);
    poundounces p(7, 7.93147);
    kilogramgram g = convertmeasure(p);
    poundounces o = convertmeasure(k);
    k.display();
    cout << " is equal to ";
    o.display();
    cout << "\n";
    p.display();
    cout << " is equal to ";
    g.display();
    return 0;
}
