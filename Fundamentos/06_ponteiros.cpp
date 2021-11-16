#include<iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
    /*
    * Um ponteiro é um endereço de memória que aponta para outro endereço de memória, ou seja, é uma referência a um endereço de
    * memória já alocado.
    *   . Detalhes:
    *      . São utilizados principalmente em estruturas de dados a fim de melhorar o desempenho, pois ao envés de alocar cópias
    *       inteiras de certos dados, criamos apenas referências a estes dados já alocados o que é mais leve, pois um ponteiro consome
    *       menos memória;
    *      . Um ponteiro pode apontar para outro ponteiro e assim em diante.
    */
    int n = 10;
    int* p1 = &n;        //Declaramos ponteiros específicos para endereços de memória que armazenam certos tipos de dados
    cout << *p1 << endl;

    float f = 12.2;
    float* p2 = &f;
    cout << *p2 << endl;

    string str = {'d', 'a', 'd', 'o'};
    cout << *p3 << endl;

    int *p4 = &n;
    int **p5 = &p4;     // Ponteiros podem apontar para outros ponteiros e assim por diante
    int ***p6 = &p5;
    cout << ***p6 << endl;

    return 0;
}

