#include <iostream>
using namespace std;

bool bissexto (int dt) {
    int dia = dt/1000000;
    int mes = (dt/10000)%100;
    int ano = dt%10000;

    if ((ano%4 == 0 && ano%100 != 0) || ano%400 == 0) {
        return true;
    } else {
        return false;
    }
}

bool ultimo_dia(int dt) {
    int dia = dt/1000000;
    int mes = (dt/10000)%100;
    int ano = dt%10000;

    if(mes == 2) {
        if (bissexto (dt) == true && dia == 29) {
            return true;
        }
        else if (bissexto(dt) == false && dia == 28) {
            return true;
        }
        else {
            return false;
        }
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia == 30) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (dia == 31) {
        return true;
    }
}

void dia_seguinte(int dt) {
    int dia = dt/1000000;
    int mes = (dt/10000)%100;
    int ano = dt%10000;

    if (ultimo_dia(dt) == true && mes != 12) {
        cout << "01 / " << mes + 1 << " / " << ano;
    }
    else if (ultimo_dia(dt) == true && mes == 12) {
        cout << "01 / 1 / " << ano + 1;
    }
    else {
        cout << dia + 1 << " / " << mes << " / " << ano;
    }
}

int main() {
    dia_seguinte(31122022);
}