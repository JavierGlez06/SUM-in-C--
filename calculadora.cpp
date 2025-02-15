#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    int aa;

    
        cout <<" || ----  Seleccione la Operacion ---- || "<< endl;
        cout <<" 1. Suma "<< endl;
        cout <<" 2. Resta "<< endl;
        cout <<" 3. Multiplicacion "<< endl;
        cout <<" 4. Division "<< endl;
        cout <<" 5. Salir "<< endl;
        cin >> aa;

        if (aa == 1){
            cout << " | | ---------  Bienvenido -------- | | " << endl;
            cout << "Ingrese el primer numero: " << endl;
            cin >> a;
            cout << "Ingrese el segundo numero: "<< endl;
            cin >> b;
            c = a + b;
            cout << "El resultado de la suma es: " << c << endl;
        }

        if (aa == 2)
        {
            cout << " | | ---------  Bienvenido -------- | | " << endl;
            cout << "Ingrese el primer numero: " << endl;
            cin >> a;
            cout << "Ingrese el segundo numero: "<< endl;
            cin >> b;
            c = a - b;
            cout << "El resultado de la resta es: " << c << endl;
        }
        
        if (aa == 3)
        {
            cout << " | | ---------  Bienvenido -------- | | " << endl;
            cout << "Ingrese el primer numero: " << endl;
            cin >> a;
            cout << "Ingrese el segundo numero: "<< endl;
            cin >> b;
            c = a * b;
            cout << "El resultado de la multiplicacion es: " << c << endl;
        }

        if (aa == 4)
        {
            cout << " | | ---------  Bienvenido -------- | | " << endl;
            cout << "Ingrese el primer numero: " << endl;
            cin >> a;
            cout << "Ingrese el segundo numero: "<< endl;
            cin >> b;
            c = a / b;
            cout << "El resultado de la division es: " << c << endl;
        }

        else if (aa == 5)
        {
            cout << "Gracias por usar la calculadora" << endl;
        }
        
        else
        {
            cout << "Opcion no valida" << endl;
        }
        


    return 0;
}