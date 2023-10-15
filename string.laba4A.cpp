
#include <iostream>
using namespace std;

    char* _strrchr(const char* str, int c)
    {
        const char* p = NULL;

        for (;;) {
            if (*str == (char)c)
                p = str;
            if (*str++ == '\0')
                return (char*)p;
        }
    }

int main()
{
   // char str[] = "This is a string";
    int size;
    char c;

    cout << " The size : " << endl;
    cin >> size;
    char* str = new char[size];

    cout << " Your string: " << endl;
  
   
   
    for (int i = 0; i < size; i++) {
        str[i] = getchar();
    }

    cout << " The symbol: " << endl;
    cin >> c;

    char* ch = _strrchr(str, int(c));
    cout << "Index of last occurrence of "<< c << " : "
        << ch - str;
  
    return 0;
}