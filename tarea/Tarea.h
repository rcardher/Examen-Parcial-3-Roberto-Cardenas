//
// Created by Roberto C on 30/11/24.
//

#ifndef TAREA_H
#define TAREA_H

#include <string>

class Tarea {
private:
    std::string id;
    std::string descripcion;
    int duracion;

public:
    Tarea(std::string id, std::string desc, int duracion);
    std::string getId() const;
    std::string getDesc() const;
    int getDuracion() const; // Asegúrate de que el método esté declarado como const
    std::string toString() const; // Asegúrate de que el método esté declarado como const
};

#endif // TAREA_H