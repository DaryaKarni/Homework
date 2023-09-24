#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n;
    cout <<  "Enter n: ";
     cin >> n;
    int *array = new int[n];

    if (n<1){
        cout <<  "Array must consist of one and more elements";
    }

    else {
        cout << "To choose enter put 1, random - 2 " << endl;
        int x;
        cin >> x;
         if ( x == 1 ) {
            cout << "Enter array elements: " << endl;
            for (int i = 0; i < n; ++i) {
                cin >> array[i];
            }
         }
        if ( x == 2 ) {
            int a, b;
            cout << "Enter left bound of random array: " << endl;
            cin >> a;
            cout << "Enter right bound of random array : " << endl;
            cin >> b;

           // int  *array = new int[n];
            cout << "Enter array elements: " << endl;
            for (int i = 0; i < n; ++i) {
                 array[i] = rand();
                 array[i] = rand() % (b - a) + a;
                 cout << array[i] << " " << endl;
            }
        }
        cout << endl;
       double sum = 0;
        for (int i = 0; i < n; ++i){
            if (array[i] > 0) {

                sum += array[i];
            }
        }
        cout << "Sum of positive elements = " << sum << endl;


        for (int i=0; i < n; i++) {
            array[i] = abs(array[i]);
           // cout << array[i] << " ";
        }
        cout << endl;
        double max = array [0];
        double min = array [0];
        for (int i = 1; i < n; ++i) {

            if (array[i] > max) {
                max = array [i];
            }
            if (array[i] < min) {
                min = array [i];
            }
        }
        cout << "max * min = " << max * min << endl;


    }


    return 0;
}