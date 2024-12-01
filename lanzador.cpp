//
// Created by Roberto C on 30/11/24.
//
#include "lanzador.h"
#include "../tarea/Tarea.h" // Asegúrate de que la ruta sea correcta
#include "Actor.h"
#include <iostream>
#include <vector>

// Ejemplo de almacenamiento de actores y tareas
std::vector<Actor> actores;

void agregarTareaAlActor() {
    std::string actorId, tareaId, tareaDesc;
    int duracion;

    std::cout << "Ingrese el ID del actor: ";
    std::getline(std::cin, actorId);

    // Buscar el actor por ID
    for (auto& actor : actores) {
        if (actor.getId() == actorId) {
            std::cout << "Ingrese el ID de la tarea: ";
            std::getline(std::cin, tareaId);
            std::cout << "Ingrese la descripción de la tarea: ";
            std::getline(std::cin, tareaDesc);
            std::cout << "Ingrese la duración de la tarea (en minutos): ";
            std::cin >> duracion;
            std::cin.ignore(); // Ignorar el salto de línea después de ingresar la duración

            Tarea tarea(tareaId, tareaDesc, duracion);
            actor.addTarea(tarea);
            std::cout << "Tarea agregada al actor." << std::endl;
            return;
        }
    }
    std::cout << "Actor no encontrado." << std::endl;
}

void listarTareas() {
    for (const auto& actor : actores) {
        std::cout << actor.toString() << std::endl;
    }
}

void agregarActor() {
    std::string id, descripcion;
    std::cout << "Ingrese el ID del actor: ";
    std::getline(std::cin, id);
    std::cout << "Ingrese la descripción del actor: ";
    std::getline(std::cin, descripcion);

    Actor actor(id, descripcion);
    actores.push_back(actor);
    std::cout << "Actor agregado." << std::endl;
}

void modificarActor() {
    std::string actorId, nuevaDescripcion;
    std::cout << "Ingrese el ID del actor a modificar: ";
    std::getline(std::cin, actorId);

    for (auto& actor : actores) {
        if (actor.getId() == actorId) {
            std::cout << "Ingrese la nueva descripción del actor: ";
            std::getline(std::cin, nuevaDescripcion);
            actor = Actor(actor.getId(), nuevaDescripcion); // Crear un nuevo objeto Actor con la nueva descripción
            std::cout << "Actor modificado." << std::endl;
            return;
        }
    }
    std::cout << "Actor no encontrado." << std::endl;
}

void eliminarActor() {
    std::string actorId;
    std::cout << "Ingrese el ID del actor a eliminar: ";
    std::getline(std::cin, actorId);

    for (auto it = actores.begin(); it != actores.end(); ++it) {
        if (it->getId() == actorId) {
            actores.erase(it);
            std::cout << "Actor eliminado." << std::endl;
            return;
        }
    }
    std::cout << "Actor no encontrado." << std::endl;
}