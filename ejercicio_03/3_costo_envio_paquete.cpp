#include <iostream>
#include <iomanip>


int main(){

    //Variables
    double peso_paquete, costo_base = 0;
    double recargo = 0, total = 0;
    int destino, region, cantidad;
    char cliente_frecuente;

    //Ingreso del peso del paquete
    std::cout << "Ingrese el peso del paquete en kg: ";
    std::cin >> peso_paquete;

    //Determinamos la tarifa base del paquete
    if(peso_paquete < 1){
        costo_base = 50;

    }else if(peso_paquete < 5){
        costo_base = 100;

    }else if(peso_paquete < 10){
        costo_base = 150;

    }else{
        costo_base = 200;

    }


    //Ingreso de datos del destino
    std::cout << "Tipo de destino ingrese el número correspondiente (1. Nacional, 2. Internacional): ";
    std::cin >> destino;


    //Determinamos el recargo por el destino
    if(destino == 2){
        std::cout << "Seleccione region ingrese el número correspondiente (1. America, 2. Europa, 3. Asia y otros): ";
        std::cin >> region;

        if(region == 1){
        recargo = costo_base * 0.15;

        } else if(region == 2){
        recargo = costo_base * 0.25;

        }else {
        recargo = costo_base * 0.40;
        }

    }

    
    //Calculo parcial antes de descuentos
    total = costo_base + recargo;

    //Calculo total antes de aplicar descuentos.
    std::cout << "¿Es usted un cliente frecuente? (s/n): ";
    std::cin >> cliente_frecuente;


    //Determinamos si es o no un cliente frecuente.
    if(cliente_frecuente == 's' || cliente_frecuente == 'S'){
        total = total * 0.90;

    }


    //Determinamos la cantidad de paquetes y si se hace un desciento adicional
    std::cout << "Cantidad de paquetes a enviar: ";
    std::cin >> cantidad;

    //Determinamos el precio multiplicadon por el numero de paquetes
    total = total * cantidad;

    //Si son mas de 3 paquetes hacemos un descuento del 5%
    if(cantidad > 3){
        total = total * 0.95;
    }


    //Mostramos el resultado final
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nEl costo final del envío de tu paquetería es: $" << total << std::endl;


    return 0;
}