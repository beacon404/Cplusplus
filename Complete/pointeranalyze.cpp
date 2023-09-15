#include <iostream>

int main() {
   int a = 10;
   int* ptr = &a;

   std::cout << "ptr = " << ptr << std::endl;
   std::cout << "&ptr = " << &ptr << std::endl;
   std::cout << "&a = " << &a << std::endl;
   std::cout << "a = " << a << std::endl;
   std::cout << "*ptr = " << *ptr << std::endl;

   *ptr = 20;
   std::cout << "a = " << a << std::endl;
}

int a = 10;: Declare an integer variable a and initialize it with the value 10.
int* ptr = &a;: Declare an integer pointer variable ptr and initialize it with the memory address of variable a.
std::cout << "ptr = " << ptr << std::endl;: Print the value of the pointer ptr, which is the memory address of a.
std::cout << "&ptr = " << &ptr << std::endl;: Print the memory address of the pointer variable ptr.
std::cout << "&a = " << &a << std::endl;: Print the memory address of variable a.
std::cout << "a = " << a << std::endl;: Print the value of variable a.
std::cout << "*ptr = " << *ptr << std::endl;: Print the value stored at the memory address pointed to by ptr, which is the value of variable a.
*ptr = 20;: Change the value at the memory address pointed to by ptr to 20, which means a is now assigned the value 20.
std::cout << "a = " << a << std::endl;: Print the updated value of variable a.



Expected Output:
ptr = 0x7fffedfb8bfc  // The memory address where variable 'a' is stored
&ptr = 0x7fffedfb8bf0 // The memory address of the pointer variable 'ptr'
&a = 0x7fffedfb8bfc  // The memory address of variable 'a', same as 'ptr'
a = 10              // The initial value of variable 'a'
*ptr = 10           // The value stored at the memory address pointed to by 'ptr' (same as 'a')
a = 20              // The updated value of variable 'a' after '*ptr = 20'
