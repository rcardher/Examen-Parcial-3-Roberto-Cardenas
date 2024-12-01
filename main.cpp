//
// Created by Roberto C on 30/11/24.
//
#include <iostream>
#include <string>
#include <vector>
#include "Actor.h"
#include "../Tarea/Tarea.h" // Ruta al archivo de Tarea

int main() {
    std::vector<Actor> actores; // Lista de actores
    int numActores;

    // Solicitar el número de actores
    std::cout << "Ingrese el número de actores: ";
    std::cin >> numActores;
    std::cin.ignore(); // Limpiar el buffer de entrada

    // Ciclo para ingresar los actores
    for (int i = 0; i < numActores; ++i) {
        std::string id, descripcion;
        std::cout << "Ingrese el ID del actor " << i + 1 << ": ";
        std::getline(std::cin, id);
        std::cout << "Ingrese la descripción del actor " << i + 1 << ": ";
        std::getline(std::cin, descripcion);

        Actor actor(id, descripcion); // Crear el actor
        actores.push_back(actor); // Agregar el actor a la lista

        int numTareas;
        std::cout << "Ingrese el número de tareas para el actor " << i + 1 << ": ";
        std::cin >> numTareas;
        std::cin.ignore(); // Limpiar el buffer de entrada

        // Ciclo para ingresar las tareas de cada actor
        for (int j = 0; j < numTareas; ++j) {
            std::string tareaId, tareaDesc;
            int duracion;
            std::cout << "Ingrese el ID de la tarea " << j + 1 << ": ";
            std::getline(std::cin, tareaId);
            std::cout << "Ingrese la descripción de la tarea " << j + 1 << ": ";
            std::getline(std::cin, tareaDesc);
            std::cout << "Ingrese la duración de la tarea " << j + 1 << " (en minutos): ";
            std::cin >> duracion;
            std::cin.ignore(); // Limpiar el buffer de entrada

            Tarea tarea(tareaId, tareaDesc, duracion); // Crear la tarea
            actores[i].addTarea(tarea); // Agregar la tarea al actor
        }
    }

    // Mostrar la información de todos los actores y sus tareas
    for (const auto& actor : actores) {
        std::cout << actor.toString() << std::endl;
    }

    return 0; // Finalizar el programa
}


//Fuente utilizada:Copilot