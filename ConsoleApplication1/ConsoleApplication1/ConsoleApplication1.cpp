#include <iostream>
#include "color.hpp"
using namespace std;

class Delta
{
private:
    int desc;
public:
    Delta() {
        static int next_desc = 1;
        desc = next_desc++;
    }
    int returndesc() {
        return desc;
    }
};

int main()
{
    Delta d1, d2, d3;
    cout << dye::red("Number One: ") << dye::white_on_red(d1.returndesc()) << endl;
    cout << dye::aqua("Number Two: ") << dye::white_on_aqua(d2.returndesc()) << endl;
    cout << dye::yellow("Number Three: ") << dye::white_on_yellow(d3.returndesc()) << endl;
}
