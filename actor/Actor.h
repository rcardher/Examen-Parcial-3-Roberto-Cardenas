//
// Created by Roberto C on 30/11/24.
//

#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <vector>
#include "../tarea/Tarea.h" // Asegúrate de que la ruta sea correcta

// Declaración de la clase Actor
class Actor {
private:
    std::string id; // Identificador único del actor
    std::string descripcion; // Descripción del actor
    std::vector<Tarea> listaTareas; // Vector que almacena las tareas asignadas al actor
    int tiempoTotal; // Tiempo total de las tareas del actor
    int numTareas; // Número de tareas asignadas al actor

public:
    // Constructor de la clase Actor
    Actor(std::string id, std::string descripcion);

    // Métodos para obtener los atributos del actor
    std::string getId() const; // Retorna el ID del actor
    std::string getDesc() const; // Retorna la descripción del actor
    int getNumTareas() const; // Retorna el número de tareas del actor

    // Método para agregar una tarea al actor
    int addTarea(Tarea t);

    // Método para obtener una representación en cadena del actor y sus tareas
    std::string toString() const;
};

#endif // ACTOR_H

//Fuente utilizada:Copilot