//
// Created by Roberto C on 30/11/24.
//

#include "Tarea.h"

Tarea::Tarea(std::string id, std::string desc, int duracion) {
    this->id = id;
    this->descripcion = desc;
    this->duracion = duracion;
}

std::string Tarea::getId() const {
    return id;
}

std::string Tarea::getDesc() const {
    return descripcion;
}

int Tarea::getDuracion() const {
    return duracion;
}

std::string Tarea::toString() const {
    return "Tarea: " + descripcion + " Duracion: " + std::to_string(duracion);
}