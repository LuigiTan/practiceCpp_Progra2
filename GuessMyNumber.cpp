#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    srand(time(NULL));//Se utiliza el tiempo de la maquina (reloj interno) para siempre generar un numero diferente 
    int NumRan = rand() % 300;
    int intentos = 0;
    int Respuesta = 0;
    int RangoMax = NumRan + 5;
    int RangoMin = NumRan - 5;
    cout << "Bienvenido al *Guess My Numer*\n";

    do
    {

        cout << "Introduzca el numero que cree que la maquina haya elegido del 0 al 300\n";
        cout << "Modo Test: El numero random es: " << NumRan << endl;
        cin >> Respuesta;
        if (Respuesta > NumRan)
        {
            intentos = intentos + 1;

            cout << "Tu numero es mas alto que el de la maquina\n";
            system("Color 09");
            for (int i = RangoMax; i >= NumRan; i--)
            {
                if (Respuesta == i)
                {
                    cout << "Estas muy cerca, sigue intentandolo" << endl;
                }
            }

        }
        else if (Respuesta < NumRan)
        {
            intentos = intentos + 1;
            cout << "Tu numero es mas bajo que el de la maquina\n";
            system("Color 0C");
            for (int i = RangoMin; i <= NumRan; i++)
            {
                if (Respuesta == i)
                {
                    cout << "Estas muy cerca, sigue intentandolo" << endl;
                }
            }

        }
        else if (Respuesta == NumRan)
        {

            intentos = intentos + 1;
            if (intentos == 1)
            {
                cout << "FELICIDADES, encontraste el numero en el primer intento!!!!!";
                system("Color 01"); //Recordatorio de que en esta funcion el primer caracter (despues de color) es el background y el segundo es el color del texto
                Sleep(250);
                system("Color 04");
                Sleep(250);
                system("Color 02");
                Sleep(250);
                system("Color 01");
                Sleep(250);
                system("Color 04");
                Sleep(250);
                system("Color 02");
                Sleep(250);


            }
            else
            {
                system("Color 02");
                cout << "Correcto! Tu numero de intentos fue de " << intentos << " Intentos";
            }

        }
        else
        {
            cout << "Opcion no valida";
        }
    } while (Respuesta != NumRan);

}