#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int multiply(int x, int y) {
  int mult = x * y ;
  return mult;
}
