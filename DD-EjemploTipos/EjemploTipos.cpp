#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int main() {
    //int
    assert(2 + 2 == 4);

    //bool
    assert(true != false);
    assert(true == 1);
    assert(false == 0);

    //char
    assert('A' + 32 == 'a');

    //unsigned
    assert(10u - 5u == 5u);
    assert(0u - 1u > 0u);

    //double
    assert(3.5 + 0.25 == 3.75);

    //string
    using namespace std::string_literals;
    assert("hola "s + "mundo"s == "hola mundo"s);

}
