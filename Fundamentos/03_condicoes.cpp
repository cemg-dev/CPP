#include <iostream>

/*
* As condições em C++ são dadas por if, else if e else
* Detalhes:
*    . Podemos ter if seguido de vários else if e um else final. Outro ponto é que você
*    deve garantir que este else final é a última condição ou possibilidade restante de
*    uma análise.
*/

/*
* Exemplificando, suponha que queremos saber o imc (Índice de Massa Corporal) de uma pessoa
* e seu estado na tabela de imc para analisar se ela está abaixo, acima ou no peso ideal.
*/
using std::cout;
using std::cin;
using std::endl;

int main() {
    int peso;
    float altura;

    cout << "Qual o seu peso? ";
    cin >> peso;
    cout << "Qual a sua altura? ";
    cin >> altura;

    /*
    * Temos os dados de peso e altura da pessoa. Em seguida, calculamos o imc usando a fórmula:
    * imc é igual ao peso dividido pela altura ao quadrado.
    */

    float imc = peso / (altura * altura);
    cout << "Seu imc é de " << imc << endl;
    if(imc < 18.5){
        cout << "Você está abaixo do peso" << endl;
    }
    else if((imc >= 18.5) & (imc < 25)){
        cout << "Você está no peso ideal" << endl;
    }
    else if((imc >= 25) & (imc < 30)){
        cout << "Você está em sobrepeso" << endl;
    }
    else if((imc >= 30) & (imc < 35)){
        cout << "Você está em obesidade I" << endl;
    }
    else if((imc >= 35) & (imc < 40)){
        cout << "Você está em obesidade II" << endl;
    } else {
        cout << "Você está em obesidade III (ou Morbida)" << endl; // Observe que esta é a última condição restante
    }
    
    return 0;
}

