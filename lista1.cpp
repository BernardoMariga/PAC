// Lista de exercícios 1 (06/10/2022)
#include <iostream>

//Execício 1 (SOMA)
int soma(int a, int b, int c){
    return a+b+c;
}

//Exercício 2 e 3a (Tempo em horas e minutos -> tempo em minutos)
int tempoEmMins(int horas, int minutos){
    return (60*horas)+minutos;
}

//Exercicio 3b (Diferença entre previsão de chegada e chegada)
int diff(int h1, int m1, int h2, int m2){
    int prev, chegada;
    prev = tempoEmMins(h1,m1);
    chegada = tempoEmMins(h2,m2);
    //Descobre se o voo está adiantado ou atrasado
    if (chegada - prev < 0){
        return prev - chegada;
    }
    else return chegada - prev;
}

//Exercício 4 (Salário base)
float salarioBase(float valorDaHora, int horasTrabalhadas){
    return valorDaHora * horasTrabalhadas;
}

//Exercício 5 (Bonificação por tempo na empresa)
float bonus(float salario, int anos){
    while (anos>0){
        salario = salario + (salario * 0.02);
        anos = anos -1;
    }
    return salario;
}

//Exercício 6 (Auxílio creche)
float auxilioCreche(int dependentes){
    return dependentes * 50;
}

//Exercício 7 (Tempo em semanas e dias)
void tempoDeEvento(int totalDias){
    std::cout << totalDias / 7 << " semanas e " << totalDias % 7 << " dias.";
}

int main() {
    tempoDeEvento(30);
    return 0;
}