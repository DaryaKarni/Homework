#include "class.h"

using namespace std;
int main()
{
    int x, y;
    cout << " Input x: " << endl;
    cin >> x;
    cout << " Input y: " << endl;
    cin >> y;
    Fraction a(x, y);

    int v, w;
    cout << " Input v: " << endl;
    cin >> v;
    cout << " Input w: " << endl;
    cin >> w;
    Fraction b(v, w);

    Fraction sum = a.add(b);

    cout << "a = ";
    a.print();
    cout << endl;

    cout << "b = ";
    b.print();
    cout << endl;

    cout << "a + b = ";
    sum.print();
    cout << endl;

    return 0;
}
