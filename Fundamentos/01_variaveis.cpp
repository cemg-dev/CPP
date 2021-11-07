#include <iostream>

int main() {
    /*
    * . Tipos Primitivos mais comuns
    */
    int n1 = 0;
    long n2 = 123456789;
    float n3 = 1.2345;
    double n4 = 1.2345678;
    char c1 = 'a';
    
    /*
    * . Cada variável: n1, n2, n3, n4 e n5 foi declarada de um tipo diferente;
    * . Cada variável só poderá armazenar valores correspondentes ao seu tipo;
    * . Cada variável foi declarada e inicializada na mesma linha;
    */
    
    /*
    * . Declarando variáveis sem inicializá-las;
    * . Obs: enquanto não receber um valor inicial a variável conterá um número aleatório geralmente considerado "lixo" 
    */
    int n6;
    long n7;
    float n8;
    double n9;
    char c2;
    
    /*
    * . É possível declarar multiplas variáveis do mesmo tipo em apenas uma linha;
    */
    int n10, n11, n12;
    long n13, n14 = 12345736273, n15;
    float n16, n17, n18 = 12.212;
    double n19 = 10.21222212, n20, n21;
    char c3, c4 = 'c', c5 = 'a';

    return 0;
}
