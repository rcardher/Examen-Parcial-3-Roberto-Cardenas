//
// Created by Roberto C on 30/11/24.
//
#include <iostream>
#include <string>
#include <vector>
#include "Actor.h"
#include "../Tarea/Tarea.h" // Asegúrate de que la ruta sea correcta

int main() {
    std::vector<Actor> actores;
    int numActores;

    std::cout << "Ingrese el número de actores: ";
    std::cin >> numActores;
    std::cin.ignore(); // Ignorar el salto de línea después de ingresar el número

    for (int i = 0; i < numActores; ++i) {
        std::string id, descripcion;
        std::cout << "Ingrese el ID del actor " << i + 1 << ": ";
        std::getline(std::cin, id);
        std::cout << "Ingrese la descripción del actor " << i + 1 << ": ";
        std::getline(std::cin, descripcion);

        Actor actor(id, descripcion);
        actores.push_back(actor);

        int numTareas;
        std::cout << "Ingrese el número de tareas para el actor " << i + 1 << ": ";
        std::cin >> numTareas;
        std::cin.ignore(); // Ignorar el salto de línea después de ingresar el número

        for (int j = 0; j < numTareas; ++j) {
            std::string tareaId, tareaDesc;
            int duracion;
            std::cout << "Ingrese el ID de la tarea " << j + 1 << ": ";
            std::getline(std::cin, tareaId);
            std::cout << "Ingrese la descripción de la tarea " << j + 1 << ": ";
            std::getline(std::cin, tareaDesc);
            std::cout << "Ingrese la duración de la tarea " << j + 1 << " (en minutos): ";
            std::cin >> duracion;
            std::cin.ignore(); // Ignorar el salto de línea después de ingresar la duración

            Tarea tarea(tareaId, tareaDesc, duracion);
            actores[i].addTarea(tarea);
        }
    }

    // Mostrar información de todos los actores y sus tareas
    for (const auto& actor : actores) {
        std::cout << actor.toString() << std::endl;
    }

    return 0;
}