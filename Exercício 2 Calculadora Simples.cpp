#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    char operacao;               // Variável para armazenar a operação
    float num1, num2, resultado; // Variáveis para os números e o resultado da operação

    // Solicita ao usuário que insira o primeiro número
    cout << "Digite o primeiro numero: ";
    cin >> num1; // Lê o primeiro número fornecido pelo usuário
        // Solicita ao usuário que insira a operação desejada

    cout << "Digite a operacao (+, -, *, /): ";
    cin >> operacao; // Lê a operação fornecida pelo usuário


        // Solicita ao usuário que insira o segundo número
    cout << "Digite o segundo numero: ";
    cin >> num2; // Lê o segundo número fornecido pelo usuário
if (operacao == '+'){
 resultado = num1 + num2;  
} else if (operacao == '-'){
     resultado = num1 - num2;  
} else if (operacao == '*'){
     resultado = num1 * num2;  
} else if (operacao == '/'){
    if(num2 != 0){
             resultado = num1 / num2;  
    }else{
                cout << "Operação inválida";
                return 0;
    }
   
} else {
        cout << "Operação inválida";
                        return 0;
}
        cout << "Resultado: "<< resultado<<endl;

                return 0;

}