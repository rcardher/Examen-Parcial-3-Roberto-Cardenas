//
// Created by Roberto C on 30/11/24.
//
#include "lanzador.h"
#include "../tarea/Tarea.h" // Ruta al archivo de la clase Tarea
#include "Actor.h"
#include <iostream>
#include <vector>

// Lista de actores
std::vector<Actor> actores;

// Agregar una tarea a un actor
void agregarTareaAlActor() {
    std::string actorId, tareaId, tareaDesc;
    int duracion;

    std::cout << "Ingrese el ID del actor: ";
    std::getline(std::cin, actorId);

    // Buscar al actor por su ID
    for (auto& actor : actores) {
        if (actor.getId() == actorId) {
            std::cout << "Ingrese el ID de la tarea: ";
            std::getline(std::cin, tareaId);
            std::cout << "Ingrese la descripción de la tarea: ";
            std::getline(std::cin, tareaDesc);
            std::cout << "Ingrese la duración de la tarea (en minutos): ";
            std::cin >> duracion;
            std::cin.ignore(); // Limpiar el buffer de entrada

            // Crear la tarea y agregarla al actor
            Tarea tarea(tareaId, tareaDesc, duracion);
            actor.addTarea(tarea);
            std::cout << "Tarea agregada al actor." << std::endl;
            return;
        }
    }
    std::cout << "Actor no encontrado." << std::endl;
}

// Listar todas las tareas de todos los actores
void listarTareas() {
    for (const auto& actor : actores) {
        std::cout << actor.toString() << std::endl;
    }
}

// Agregar un nuevo actor
void agregarActor() {
    std::string id, descripcion;
    std::cout << "Ingrese el ID del actor: ";
    std::getline(std::cin, id);
    std::cout << "Ingrese la descripción del actor: ";
    std::getline(std::cin, descripcion);

    // Crear el actor y agregarlo a la lista
    Actor actor(id, descripcion);
    actores.push_back(actor);
    std::cout << "Actor agregado." << std::endl;
}

// Modificar un actor existente
void modificarActor() {
    std::string actorId, nuevaDescripcion;
    std::cout << "Ingrese el ID del actor a modificar: ";
    std::getline(std::cin, actorId);

    // Buscar al actor por su ID y modificarlo
    for (auto& actor : actores) {
        if (actor.getId() == actorId) {
            std::cout << "Ingrese la nueva descripción del actor: ";
            std::getline(std::cin, nuevaDescripcion);
            actor = Actor(actor.getId(), nuevaDescripcion); // Crear un actor nuevo con la descripción actualizada
            std::cout << "Actor modificado." << std::endl;
            return;
        }
    }
    std::cout << "Actor no encontrado." << std::endl;
}

// Eliminar un actor por su ID
void eliminarActor() {
    std::string actorId;
    std::cout << "Ingrese el ID del actor a eliminar: ";
    std::getline(std::cin, actorId);

    // Buscar al actor y eliminarlo
    for (auto it = actores.begin(); it != actores.end(); ++it) {
        if (it->getId() == actorId) {
            actores.erase(it);
            std::cout << "Actor eliminado." << std::endl;
            return;
        }
    }
    std::cout << "Actor no encontrado." << std::endl;
}

//Fuente utilizada:Copilot