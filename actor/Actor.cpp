#include "Actor.h"

// Constructor de la clase Actor
Actor::Actor(std::string id, std::string descripcion) {
    this->id = id; // Inicializa el atributo id con el valor pasado como argumento
    this->descripcion = descripcion; // Inicializa el atributo descripcion con el valor pasado como argumento
    this->tiempoTotal = 0; // Inicializa tiempoTotal a 0
    this->numTareas = 0; // Inicializa numTareas a 0
}

// Método  para obtener el id del actor
std::string Actor::getId() const {
    return id; // Retorna el valor del atributo id
}

// Método para obtener la descripción del actor
std::string Actor::getDesc() const {
    return descripcion; // Retorna el valor del atributo descripcion
}

// Método para obtener el número de tareas del actor
int Actor::getNumTareas() const {
    return numTareas; // Retorna el valor del atributo numTareas
}

// Método para agregar una tarea al actor
int Actor::addTarea(Tarea t) {
    if (this->getNumTareas() < 20) { // Verifica si el número de tareas es menor a 20
        listaTareas.push_back(t); // Agrega la tarea al vector listaTareas
        numTareas++; // Incrementa el contador de tareas
    }
    return numTareas; // Retorna el número de tareas actual
}

// Método para obtener una representación en cadena del actor y sus tareas
std::string Actor::toString() const {
    std::string resul = ""; // Inicializa una cadena vacía para almacenar el resultado
    int duracionTotal = 0; // Inicializa la duración total a 0
    for (int i = 0; i < numTareas; i++) { // Itera sobre todas las tareas del actor
        resul += "Tarea: " + std::to_string(i) + ": " + listaTareas[i].toString() + "\n"; // Agrega la información de cada tarea a la cadena resultado
        duracionTotal += listaTareas[i].getDuracion(); // Suma la duración de cada tarea a la duración total
    }
    return "Actor: " + descripcion + " Duracion Total: " + std::to_string(duracionTotal); // Retorna la cadena con la descripción del actor y la duración total de sus tareas
}

//Fuente utilizada:Copilot