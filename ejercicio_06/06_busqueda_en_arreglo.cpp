#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    //Al ejecutar el programa esto hara que los numeros sea diferentes
    srand(time(0));

    //arreglo de 10 números
    int arreglo[10];

    //numero buscado
    int numero_buscado;

    //variable que guarda las veces que esta el número
    int contador = 0; 

    //Llenamos el arreglo con números aleatorios entre 1 y 30
    for(int i = 0; i < 10; i++){
        arreglo[i] = rand() % 30 + 1;
    }


    //Imprimimos el arreglo generado
    std::cout << "Arreglo: ";
    for(int i = 0; i < 10; i++){
        std::cout << "[" << arreglo[i] << "]";
    }
    std::cout << "\n" << std::endl;


    //Solicitar al usuario el número a buscar 
    std::cout << "\n¿Que número deseas buscar en el arreglo?: ";
    std::cin >> numero_buscado;


    //Contar cuantas veces aparece 
    for(int i = 0; i < 10; i++){
        if(arreglo[i] == numero_buscado){
            //sumamos 1 al encontrarlo
            contador = contador + 1;
        }
    }

    //Mostramos el resultado
    std::cout << "----------------------------" << std::endl;
    if(contador > 0){
        std::cout << "El número " << numero_buscado << " se encuentra " << contador << " veces. " << std::endl;

    }else{
        std::cout << "El número " << numero_buscado << " no se encuentra en el arreglo. " << std::endl;
    }
    std::cout << "----------------------------" << std::endl;

    return 0;

}