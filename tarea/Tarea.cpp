//
// Created by Roberto C on 30/11/24.
//

#include "Tarea.h"

#include<iostream>
#include<string>

class Tarea{
  private:
    std::string id;// Access specifier
    std::string descripcion;
    int duracion;
    //Attribute (int variable)
    //Attribute (string variable)
    public:
      Tarea(std::string id, std::string desc, int duracion){
        this->id = id;
        this->descripcion = desc;
        this->duracion = duracion;
}
public:
  std::string getId(){
    return id;

  }
  std::string getDesc(){
    return descripcion;
  }

  int getDuracion(){
    return duracion;
  }
  std::string toString(){
    return "Tarea: " + descripcion + " Duracion: " + std::to_string(duracion);
  }
  };
