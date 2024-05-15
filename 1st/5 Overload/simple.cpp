#include <iostream>
#include <string>

using namespace std;


class Overload{
    private:
        string a;
    public:
        Overload(string a): a(a) {};
        string operator+(const Overload &another){ //Overload instead of string 
            string con = this->a+another.a ; //Overload instead of string 
            return con;
           
            };
        void display(){
            cout<< a;

        }

};

int main(){
    Overload name("Sanjay ");
    Overload name2("Pahari");
    string con = name+name2; //Overload instead of string 
    cout<< con;
    // con.display();
    
    return 0; 
}



// class UserInput {
// private:
//     int a, b;
//     string c, d;

// public:
//     int add(const UserInput& other) {
//         return a + b + other.a + other.b;
//     }

//     string concatenate(const UserInput& other) {
//         return c + d + other.c + other.d;
//     }

//     // Constructors to initialize members
//     UserInput(int a_val, int b_val, string c_val, string d_val) : a(a_val), b(b_val), c(c_val), d(d_val) {}
// };

// int main() {
//     // Create two instances of UserInput
//     UserInput obj1(1, 2, "Hello", " ");
//     UserInput obj2(3, 4, "World", "!");

//     // Use the add function for integers
//     int sum = obj1.add(obj2);
//     cout << "Sum of integers: " << sum << endl;

//     // Use the concatenate function for strings
//     string result = obj1.concatenate(obj2);
//     cout << "Concatenated string: " << result << endl;

//     return 0;
// }
