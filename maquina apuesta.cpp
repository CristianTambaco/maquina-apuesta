#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void moneda() {
    
    string resultado = "";
    for (int i = 0; i < 3; i++) {
        double aleatorio = (double)rand() / RAND_MAX;
        if (aleatorio < 0.333)
            resultado += "A";
        else if (aleatorio < 0.666)
            resultado += "B";
        else
            resultado += "C";
    }

    cout<<endl;
    cout << "Resultado: " << resultado << endl;

   
    if (resultado == "AAA" || resultado=="BBB" || resultado=="CCC")
        cout << "Ganaste!" << endl;
    else
        cout << "No ganaste" << endl;
}

int main() {
    srand(time(0));
    for(int i=0; i<20; i++){
    	moneda();
    }

    
    return 0;
}

