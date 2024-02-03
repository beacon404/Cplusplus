#include <iostream>
#include <string>

using namespace std;

template<typename T>
bool mgreater(T a, T b) {
    return a > b;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    // cin >> a >> b;
    // cout << "a > b: " << mgreater(a, b) << endl;  // argument type: int
     cout << "a > b: " << mgreater<string>("a", "b") << endl;

    return 0;
}
