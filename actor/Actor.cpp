#include "Actor.h"

Actor::Actor(std::string id, std::string descripcion) {
    this->id = id;
    this->descripcion = descripcion;
    this->tiempoTotal = 0;
    this->numTareas = 0;
}

std::string Actor::getId() const {
    return id;
}

std::string Actor::getDesc() const {
    return descripcion;
}

int Actor::getNumTareas() const {
    return numTareas;
}

int Actor::addTarea(Tarea t) {
    if (this->getNumTareas() < 20) {
        listaTareas.push_back(t); // Verifica que listaTareas esté correctamente declarado en Actor.h
        numTareas++;
    }
    return numTareas;
}

std::string Actor::toString() const {
    std::string resul = "";
    int duracionTotal = 0;
    for (int i = 0; i < numTareas; i++) {
        resul += "Tarea: " + std::to_string(i) + ": " + listaTareas[i].toString() + "\n";
        duracionTotal += listaTareas[i].getDuracion();
    }
    return "Actor: " + descripcion + " Duracion Total: " + std::to_string(duracionTotal);
}

