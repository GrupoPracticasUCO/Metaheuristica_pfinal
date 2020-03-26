/*
 * RPOSolGenerator.cpp
 *
 * Fichero que define los métodos de la clase RPOInstance.
 *
 * @author Rafael Hormigo Cabello
 * @author Andrés López Cárdenas
 * @author Antonio Gómez Giménez
 * @author Óscar Jr. Godoy Calderóns
 */


#include "include/RPOInstance.h"
#include "include/RPOSolGenerator.h"
#include "include/RPOSolution.h"
#include <cstdlib>
#include <cmath>
#include <iostream>

#define NOCOMAPI 3141592653589793238

void RPOSolGenerator::genRandomSol(RPOInstance &instance, RPOSolution &solution){
  double *sol = new double[instance.getNDims()];
  switch (instance.getNumInstance()) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 14:
    for (int i = 0; i < instance.getNDims(); i++) {
      sol[i] = ((rand()%(20001))-10000)/100;
    }
    break;
    case 7:
    for (int i = 0; i < instance.getNDims(); i++) {
      sol[i] = (rand()%60001)/100;
    }
    break;
    case 8:
      for (int i = 0; i < instance.getNDims(); i++) {
        sol[i] = ((rand()%(6401))-3200)/100;
      }
    break;
    case 9:
    case 10:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
      for (int i = 0; i < instance.getNDims(); i++) {
        sol[i] = ((rand()%(1001))-500)/100;
      }
    break;
    case 11:
      for (int i = 0; i < instance.getNDims(); i++) {
        sol[i] = ((rand()%(1001))-500)/1000;
      }
    break;
    case 12:
      for (int i = 0; i < instance.getNDims(); i++) {
        sol[i] = ((rand()%(2*NOCOMAPI))-NOCOMAPI)/pow(10,34);
      }
    break;
    case 13:
    for (int i = 0; i < instance.getNDims(); i++) {
      sol[i] = (((rand()%401)-300))/100;
    }
    break;
    case 25:
    for (int i = 0; i < instance.getNDims(); i++) {
      sol[i] = ((rand()%301)+200)/100;
    }
    break;
    default:
      std::cerr << "Error de función" << '\n';
      exit(-1);
  }

  solution.setSol(sol);
}
