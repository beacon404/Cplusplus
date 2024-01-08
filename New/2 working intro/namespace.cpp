// namespace namespace_name {
// statements;
// }



#include <iostream>
std::string str("This is global.");
namespace n1 {
std::string str("This is inside namespace n.");
namespace n2 {
std::string str("This is inside namespace n2 of n1.");
}
}
int main() {
std::string str("This is local.");
std::cout << "str = " << str << std::endl;
std::cout << "::str = " << ::str << std::endl;
std::cout << "n1::str = " << n1::str << std::endl;
std::cout << "n1::n2::str = " << n1::n2::str << std::endl;
{
std::string str("This is inside the nested block.");
std::cout << "str inside the nested block = " << str << std::endl;
}}