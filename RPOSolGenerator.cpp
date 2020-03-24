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

void RPOSolGenerator::genRandomSol(RPOInstance &instance, RPOSolution &solution){

  double *sol = new double[instance.getNDims()];
	for (int i = 0; i < instance.getNDims(); i++) {
    //Duda desde donde hasta donde?
    sol[i] = (rand()%201)-100;
  }
  solution.setSol(sol);
}
