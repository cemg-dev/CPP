#include <iostream>

using std::cout;
using std::endl;

int main() {
    /*
    * . Repetições ou laços: são trechos de códigos que serão executados n vezes;
    *   . for;
    *   . while;
    *   . do...while;
    */
    
    /*
    * . for(inicialização; condição; iteração) {}
    */
    for(int i = 0; i < 10; i++) {
        cout << "Hello World" << endl;
    }
    
    /*
    * . O mesmo for acima escrito como while e do...while;
    */
    int i = 0;
    while(i < 10) {
        cout << "Hello World" << endl;
        i++;
    }
    
    int j = 0;
    do{
        cout << "Hello World" << endl;
        j++;
    } while(j < 10);
}
