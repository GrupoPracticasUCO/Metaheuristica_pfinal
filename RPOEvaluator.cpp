/*
 * RPOEvaluator.cpp
 *
 * Fichero que define los métodos de la clase RPOEvaluator.
 *
 * @author Rafael Hormigo Cabello
 * @author Andrés López Cárdenas
 * @author Antonio Gómez Giménez
 * @author Óscar Jr. Godoy Calderóns
 */

#include "include/RPOEvaluator.h"
#include "include/RPOSolution.h"
#include "include/RPOInstance.h"
#include "include/global.h"
#include "include/sub.h"
#include "include/rand.h"
#include <cstring>

double RPOEvaluator::computeFitness(RPOInstance &instance, RPOSolution &solution){

  double fitness;

  char *path;

  strcpy(path,instance.getExtDataDir().c_str());

  switch (instance.getNumInstance()) {
      case 1: initialize_f1(path); break;
      case 2: initialize_f2(path); break;
      case 3: initialize_f3(path); break;
      case 4: initialize_f4(path); break;
      case 5: initialize_f5(path); break;
      case 6: initialize_f6(path); break;
      case 7: initialize_f7(path); break;
      case 8: initialize_f8(path); break;
      case 9: initialize_f9(path); break;
      case 10: initialize_f10(path); break;
      case 11: initialize_f11(path); break;
      case 12: initialize_f12(path); break;
      case 13: initialize_f13(path); break;
      case 14: initialize_f14(path); break;
      case 15: initialize_f15(path); calc_benchmark_norm_f15(); break;
      case 16: initialize_f16(path); calc_benchmark_norm_f16(); break;
      case 17: initialize_f17(path); calc_benchmark_norm_f17(); break;
      case 18: initialize_f18(path); calc_benchmark_norm_f18(); break;
      case 19: initialize_f19(path); calc_benchmark_norm_f19(); break;
      case 20: initialize_f20(path); calc_benchmark_norm_f20(); break;
      case 21: initialize_f21(path); calc_benchmark_norm_f21(); break;
      case 22: initialize_f22(path); calc_benchmark_norm_f22(); break;
      case 23: initialize_f23(path); calc_benchmark_norm_f23(); break;
      case 24: initialize_f24_f25(path); calc_benchmark_norm_f24_f25(); break;
      case 25: initialize_f24_f25(path); calc_benchmark_norm_f24_f25(); break;
      default: break;
  }

  switch (instance.getNumInstance()) {
      case 1: fitness = calc_benchmark_func_f1(solution.getSol()); break;
      case 2: fitness = calc_benchmark_func_f2(solution.getSol()); break;
      case 3: fitness = calc_benchmark_func_f3(solution.getSol()); break;
      case 4: fitness = calc_benchmark_func_f4(solution.getSol()); break;
      case 5: fitness = calc_benchmark_func_f5(solution.getSol()); break;
      case 6: fitness = calc_benchmark_func_f6(solution.getSol()); break;
      case 7: fitness = calc_benchmark_func_f7(solution.getSol()); break;
      case 8: fitness = calc_benchmark_func_f8(solution.getSol()); break;
      case 9: fitness = calc_benchmark_func_f9(solution.getSol()); break;
      case 10: fitness = calc_benchmark_func_f10(solution.getSol()); break;
      case 11: fitness = calc_benchmark_func_f11(solution.getSol()); break;
      case 12: fitness = calc_benchmark_func_f12(solution.getSol()); break;
      case 13: fitness = calc_benchmark_func_f13(solution.getSol()); break;
      case 14: fitness = calc_benchmark_func_f14(solution.getSol()); break;
      case 15: fitness = calc_benchmark_func_f15(solution.getSol()); break;
      case 16: fitness = calc_benchmark_func_f16(solution.getSol()); break;
      case 17: fitness = calc_benchmark_func_f17(solution.getSol()); break;
      case 18: fitness = calc_benchmark_func_f18(solution.getSol()); break;
      case 19: fitness = calc_benchmark_func_f19(solution.getSol()); break;
      case 20: fitness = calc_benchmark_func_f20(solution.getSol()); break;
      case 21: fitness = calc_benchmark_func_f21(solution.getSol()); break;
      case 22: fitness = calc_benchmark_func_f22(solution.getSol()); break;
      case 23: fitness = calc_benchmark_func_f23(solution.getSol()); break;
      case 24: fitness = calc_benchmark_func_f24_f25(solution.getSol()); break;
      case 25: fitness = calc_benchmark_func_f24_f25(solution.getSol()); break;
      default: break;
  }

  return fitness;
}
