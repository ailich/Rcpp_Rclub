#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double multiply(double x, double y) {
  double mult = x * y ;
  return mult;
}
