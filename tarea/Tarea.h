//
// Created by Roberto C on 30/11/24.
//

#ifndef TAREA_H // Para que no se repita
#define TAREA_H

#include <string>

class Tarea {
private:
    std::string id; // ID de la tarea
    std::string descripcion; // Descripción de la tarea
    int duracion; // Duración de la tarea

public:
    Tarea(std::string id, std::string desc, int duracion); // Constructor
    std::string getId() const; // Obtener el ID
    std::string getDescripcion() const; // Obtener la descripción
    int getDuracion() const; // Obtener la duración
    std::string toString() const; // Convertir a string
};

#endif // TAREA_H
