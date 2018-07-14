#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char *argv[])
{
  arma::arma_rng::set_seed_random();

  arma::arma_rng::set_seed(1000);
  //create a 4x4 matrix and print it on screen
  Mat<double> A = arma::randu(4,4);
  cout << "A:\n" <<A << "\n";

  //Multiple A with its Transpose
  cout << "A * A(t)" << "\n";
  cout << A * A.t() << "\n";

  //Access and Modify rows and columns
  A.row(0) = A.row(1) + A.row(3); 
  A.col(3).zeros();
  cout << "add rows 1 and 3, store result in row 0, also fill 4th column with zeros:\n";
  cout <<"A:\n" << A << "\n";

  //create a diagonal matrix using diagonal of A
  Mat<double> B = arma::diagmat(A);
  cout <<"B:\n" << B << "\n";

  //Save matrices A and B
  A.save("A_mat.txt", arma::arma_ascii);
  B.save("B_mat.txt", arma::arma_ascii);
  
  return 0;
  //compile using the following command
  //g++ -Wall -g ArmadilloExample.cpp -o ArmadilloExample -larmadillo

}


