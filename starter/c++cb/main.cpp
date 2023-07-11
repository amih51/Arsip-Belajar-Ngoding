#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int a = 1;

    cout << a << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<float>::min() << endl;
    return 0;
}
