//
// Created by Roberto C on 30/11/24.
//

#include "Tarea.h"

// Constructor de Tarea
Tarea::Tarea(std::string id, std::string desc, int duracion) {
    this->id = id; // Guardar el ID
    this->descripcion = desc; // Guardar la descripción
    this->duracion = duracion; // Guardar la duración
}

// Obtener el ID de la tarea
std::string Tarea::getId() const {
    return id;
}

// Obtener la descripción de la tarea
std::string Tarea::getDescripcion() const {
    return descripcion;
}

// Obtener la duración de la tarea
int Tarea::getDuracion() const {
    return duracion;
}

// Convierte los datos de la tarea en un string
std::string Tarea::toString() const {
    return "Tarea: " + descripcion + " Duracion: " + std::to_string(duracion);
}
