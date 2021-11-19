#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //oxente
    string UserInput;
    double UserNumberInput;
    double UserNumberInput2;
    double Resultado;
    string Reset;

    void Calculate();
{
    
    cout << "Bem vindo para a calculadora 100% profissional!" << endl;
    cout << "Selecione o calculo que voce quer fazer: Adicao[1], Subtracao[2], Vezes[3], Divisao[4]" << endl;
    cin >> UserInput;

    //fazerr us calculuuu
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
        cout << "PARABNS VOZE AXO UM ISTER EGUI" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "AMOGUS AMOGUS AMOGUS AMOGUS" << endl;
        }
    }

    cout << "Operacao concluida" << endl;
    cout << "Reset:Recomecar operacao" << endl;
    if (Reset == "reset")
    {
        Calculate();
    }
    else if (Reset == "Reset")
    {
        Calculate();
    }
}
}