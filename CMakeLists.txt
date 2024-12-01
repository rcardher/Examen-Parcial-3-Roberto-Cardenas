cmake_minimum_required(VERSION 3.29)
project(Examen_Parcial_3_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

include_directories(actor)

add_executable(Examen_Parcial_3_Roberto_Cardenas
    actor/Actor.cpp
    actor/Actor.h
    main.cpp
        lanzador.cpp
        lanzador.h
        crud/Crud.cpp
        crud/Crud.h
        tarea/Tarea.cpp)
