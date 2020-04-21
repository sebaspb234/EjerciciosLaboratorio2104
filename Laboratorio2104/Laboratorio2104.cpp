#include <iostream>

using namespace std;

///ejercicio 2.16
void ejercicio216()
{
    int a, b;
    int suma{ 0 }, resta{ 0 }, producto{ 0 }, cociente{ 0 };
    cout << "Ingrese 2 numeros: "; cin >> a >> b;
    suma = a + b;
    resta = a - b;
    producto = a * b;
    cociente = a / b;
    cout << "La suma de los numeros es: " << suma << endl;
    cout << "La resta de los numeros es: " << resta << endl;
    cout << "El producto de los numeros es: " << producto << endl;
    cout << "El cociente de los numeros es: " << cociente << endl;
}

///ejercicio 2.17
void ejercicio217()
{
    char v = { 'V' }, x{ 'X' }, y{ 'Y' }, z{ 'Z' };
    char VX[] = "VX";
    char YZ[] = " YZ";
    //a
    cout << VX << YZ << endl;
    //b
    cout << v << x << " " << y << z << endl;
    //c
    cout << VX;
    cout << YZ << endl;
}

///ejercicio 2.18
void ejercicio218()
{
    int n1, n2;
    cout << "Ingresa dos numeros: "; cin >> n1;
    cout << "Ingresa dos numeros: "; cin >> n2;

    if (n1 == n2)
    {
        cout << "Estos numeros son iguales" << endl;
    }
    else if (n1 > n2)
    {
        cout << n1 << " Es mayor" << endl;
    }
    else
    {
        cout << n2 << " Es mayor" << endl;
    }
}

///ejercicio 2.19
void ejericio219()
{
    float x, y, z;
    float suma{ 0 }, producto{ 0 }, prom{ 0 }, menor{ 0 }, mayor{ 0 };
    cout << "Ingrese 3 numeros: "; cin >> x;
    cout << "Ingrese 3 numeros: "; cin >> y;
    cout << "Ingrese 3 numeros: "; cin >> z;
    suma = x + y + z;
    prom = suma / 3;
    producto = x * y * z;

    if (x > y)
    {
        if (x > z) { mayor = x; }
        else { mayor = z; }
    }
    else if (y > z)
    {
        if (x > y) { mayor = x; }
        else { mayor = y; }
    }
    else if (z > x)
    {
        if (z > y) { mayor = z; }
        else { mayor = y; }
    }

    if (x < y)
    {
        if (x < z) { menor = x; }
        else { menor = z; }
    }
    else if (y < z)
    {
        if (x < y) { menor = x; }
        else { menor = y; }
    }
    else if (z < x)
    {
        if (z < y) { menor = z; }
        else { menor = y; }
    }

    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << prom << endl;
    cout << "El producto es: " << producto << endl;
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;
}

///ejercicio 2.27
void ejercicio227()
{
    char x;
    int entero;
    cout << "Ingresa un caracter: "; cin >> x;
    entero = static_cast<int>(x);
    cout << entero << " Es la representacion numerica del caracter " << x << endl;
}

///ejercicio 2.28
void ejercicio228()
{
    int num, a, b, c, d;
    cout << "Ingresa un numero de 4 digitos: "; cin >> num;
    a = num % 10;
    num /= 10;
    b = num % 10;
    num /= 10;
    c = num % 10;
    num /= 10;
    d = num % 10;
    cout << a << b << c << d << endl;
}

///ejercicio 2.29
void ejercicio229()
{
    int p1{ 0 }, p2{ 1 }, p3{ 2 }, p4{ 3 }, p5{ 4 };

    cout << "Longitud de la cara de un cubo(cm)\t Area de la superficie de un cubo(cm**2)\t Volumen del cubo(cm**3)\n";

    cout << p1 << "\t\t\t\t\t\t\t" << 6 * (p1 * p1) << "\t\t\t\t\t" << p1 * p1 * p1 << "\n";
    cout << p2 << "\t\t\t\t\t\t\t" << 6 * (p2 * p2) << "\t\t\t\t\t" << p2 * p2 * p2 << "\n";
    cout << p3 << "\t\t\t\t\t\t\t" << 6 * (p3 * p3) << "\t\t\t\t\t" << p3 * p3 * p3 << "\n";
    cout << p4 << "\t\t\t\t\t\t\t" << 6 * (p4 * p4) << "\t\t\t\t\t" << p4 * p4 * p4 << "\n";
    cout << p5 << "\t\t\t\t\t\t\t" << 6 * (p5 * p5) << "\t\t\t\t\t" << p5 * p5 * p5 << "\n";

}

int main()
{
    ///ejercicio2.16
    cout << "Ejercicio 2.16" << endl;
    ejercicio216();
    cout << endl;

    ///ejercicio2.17
    cout << "Ejercicio 2.17" << endl;
    ejercicio217();
    cout << endl;

    ///ejercicio2.18
    cout << "Ejercicio 2.18" << endl;
    ejercicio218();
    cout << endl;

    ///ejercicio2.19
    cout << "Ejercicio 2.19" << endl;
    ejericio219();
    cout << endl;

    ///ejercicio2.27
    cout << "Ejercicio 2.27" << endl;
    ejercicio227();
    cout << endl;

    ///ejercicio2.28
    cout << "Ejercicio 2.28" << endl;
    ejercicio228();
    cout << endl;

    ///ejercicio2.29
    cout << "Ejercicio 2.29" << endl;
    ejercicio229();
    cout << endl;

    return 0;
}
