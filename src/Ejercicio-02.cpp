// Ejercicio-02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{

    int age = 25;
    float area = 64.74;
    double volume = 134.64534;
    double distance = 45E12;    // 45E12 es igual a 45*10^12
    char test = 'h';
    bool cond = false;
    long b = 4523232;
    long int c = 2345342;
    long double d = 233434.56343;

    // mostramos por salida estandar el valor de la variable age
    std::cout << "edad" << age << std::endl;

    // Descomenta la siguiente linea, reemplaza la palabra TEXTO y la VARIABLE que quieras mostrar por la salida estandar 
    // std::cout << "TEXTO" << VARIABLE << std::endl;

    //Proba descomentando las siguientes lineas y observa que sucede..
    //short derroneo = 3434233; // Error! fuera de rango
    //unsigned int wrongsign = -5;    // Error! solo se pueden guardar numeros positivos
    //std::cout << "Error short" << derroneo << std::endl;
    //std::cout << "Error unsigned" << wrongsign << std::endl;

    return 0; // success return
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
