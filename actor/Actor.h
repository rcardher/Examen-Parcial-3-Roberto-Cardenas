//
// Created by Roberto C on 30/11/24.
//

#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <vector>
#include "../tarea/Tarea.h" // Asegúrate de que la ruta sea correcta

class Actor {
private:
    std::string id;
    std::string descripcion;
    std::vector<Tarea> listaTareas; // Verifica que este atributo esté declarado
    int tiempoTotal;
    int numTareas;

public:
    Actor(std::string id, std::string descripcion);

    std::string getId() const;
    std::string getDesc() const;
    int getNumTareas() const;
    int addTarea(Tarea t);
    std::string toString() const;
};

#endif // ACTOR_H