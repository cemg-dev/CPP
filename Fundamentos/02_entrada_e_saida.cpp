#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    /*
    * . Tipos Primitivos mais comuns;
    * . Veremos como dar entrada e imprimir dados para variáveis de tipos primitivos;
    */
    
    int n1;
    cout << "Digite um número inteiro: ";  // imprime apenas a mensagem entre "";
    cin >> n1;
    cout << "Você digitou " << n1 << endl; // imprime a mensagem Você digitou número digitado. endl é uma quebra de linha;
    
    long n2;
    cout << "Digite um número inteiro grande: ";
    cin >> n2;
    cout << "Você digitou " << n2 << endl;                   
    
    float n3;
    cout << "Digite um número decimal: ";
    cin >> n3;
    cout << "Você digitou " << n3 << endl;                     
    
    double n4;
    cout << "Digite um número decimal preciso: ";
    cin >> n4;
    cout << "Você digitou " << n4 << endl;                   
    
    char c1;
    cout << "Digite um caractere: ";
    cin >> c1;
    cout << "Você digitou " << c1 << endl;        
    
    return 0; 
}
