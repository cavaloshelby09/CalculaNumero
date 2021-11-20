#include <iostream>
using namespace std;

int main()
{
string UserInput;
double Resultado;
double UserNumberInput;
double UserNumberInput2;



    cout << "Bem vindo para a calculadora 100% profissional!" << endl;
    cout << "Selecione o calculo que voce quer fazer: Adicao[1], Subtracao[2], Vezes[3], Divisao[4]" << endl;
    cin >> UserInput;

    if (UserInput == "1")
    {
        cout << "Coloque os numeros(Exemplo:10.0 e 20.0)" << endl;
        cin >> UserNumberInput;
        cout << "Proximo numero" << endl;
        cin >> UserNumberInput2;
        Resultado = UserNumberInput + UserNumberInput2;
        cout << "Resultado:" << Resultado << endl;
    }

    
    else if (UserInput == "2")
    {
        cout << "Coloque os numeros(Exemplo:10.0 e 20.0)" << endl;
        cin >> UserNumberInput;
        cout << "Proximo numero" << endl;
        cin >> UserNumberInput2;
        Resultado = UserNumberInput - UserNumberInput2;
        cout << "Resultado:" << Resultado << endl;
    }


    else if (UserInput == "3")
    {
        cout << "Coloque os numeros(Exemplo:10.0 e 20.0)" << endl;
        cin >> UserNumberInput;
        cout << "Proximo numero" << endl;
        cin >> UserNumberInput2;
        Resultado = UserNumberInput * UserNumberInput2;
        cout << "Resultado:" << Resultado << endl;
    }


    else if (UserInput == "4")
    {
        cout << "Coloque os numeros(Exemplo:10.0 e 20.0)" << endl;
        cin >> UserNumberInput;
        cout << "Proximo numero" << endl;
        cin >> UserNumberInput2;
        Resultado = UserNumberInput / UserNumberInput2;
        cout << "Resultado:" << Resultado << endl;
    }


    else if (UserInput == "5")
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "SUS SUS SUS AMOGUS AMOGUS AMOGUS EASTER EGG EASTER EGG EASTER EASTER EASTER EASTER EASTER EASTER";
        }
    }
}