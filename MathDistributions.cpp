#include <iostream>
#include <boost/math/distributions.hpp>

int main()
{
  boost::math::normal_distribution <> i(0.5,1);

  boost::math::normal_distribution<> x(3.5);

  int printDist(boost::math::normal_distribution<> &i);
 
  printDist(i);
  printDist(x);

  return 0;

  }

 int printDist(boost::math::normal_distribution<> &d){
    
    std::cout << "CDF:"<< cdf(d,0.2)<< std::endl;
    std::cout << "PDF:"<< pdf(d,0.0)<< std::endl;
    std::cout << "Inverse:"<< quantile(d,0.1)<< std::endl;
    std::cout << "Mode:"<< mode(d)<< std::endl;
    std::cout << "Variance:"<< variance(d)<< std::endl;
    std::cout << "SD:"<< standard_deviation(d)<< std::endl; std::cout << "Skew:"<< skewness(d)<< std::endl;
    std::cout << "Kurtosis:"<< kurtosis(d)<< std::endl;
    std::cout << "Excess Kurt:" << kurtosis_excess(d)<< std::endl;

    std::pair<double,double> sup=support(d);
    std::cout <<"Left Sup:"<< sup.first << std::endl;
    std::cout <<"Right Sup:"<< sup.second << std::endl;
    return 0;
  }
