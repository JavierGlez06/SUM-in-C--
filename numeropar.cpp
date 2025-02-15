#include <iostream>
using namespace std;

 int a, b, c;

int main(int argc, char const *argv[])
{
    cout << " | |  - - - - - -  Bienvenido al numero par o impar - - - - - - - - | | " << endl;

    cout << "Ingrese un numero: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "El numero " << a << " es par" << endl;
    }
    else
    {
        cout << "El numero " << a << " es impar" << endl;
    }

    return 0;
}
