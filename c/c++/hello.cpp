#include <iostream>
using namespace std;
int main(){
    cout << "Hello" << endl;
    cout << "Digite um número: ";
    int soma,num1,num2;
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;
    soma = num1+num2;
    cout << "O valor da soma é: " << soma << endl;

    exit(0);
}