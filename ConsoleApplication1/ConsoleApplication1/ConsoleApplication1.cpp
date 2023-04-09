#include <iostream>
#include "color.hpp"
using namespace std;

class Delta
{
private:
    int descriptor;
public:
    Delta() {
        static int next_descriptor = 1;
        descriptor = next_descriptor++;
    }
    int returnDescriptor() {
        return descriptor;
    }
};

int main()
{
    Delta d1, d2, d3;
    cout << dye::red("Number One: ") << dye::white_on_red(d1.returnDescriptor()) << endl;
    cout << dye::aqua("Number Two: ") << dye::white_on_aqua(d2.returnDescriptor()) << endl;
    cout << dye::yellow("Number Three: ") << dye::white_on_yellow(d3.returnDescriptor()) << endl;
}
