#include <iostream>
#include <boost/shared_ptr.hpp>

using namespace boost;

int main(){
    shared_ptr<int> p1(new int(5));
    std::cout << "Pointer p1 value:"<<*p1<<std::endl;
    std::cout << "Pointer p1 address:"<<p1<<std::endl;
    boost::shared_ptr<int> p2(p1);
    std::cout << "Pointer p2 value:"<<*p2<<std::endl;
    std::cout << "Pointer p2 address:"<<p2<<std::endl;
    std::cout << "Pointer *p1.get():"<<*p1.get()<<std::endl;
    std::cout << "Pointer *p2.get():"<<*p2.get()<<std::endl;
    std::cout << "Pointer p2.get():"<<p2.get()<<std::endl;
    std::cout << "Pointer count: "<<p2.use_count() << "\n";

    p1.reset(new int (3));
    std::cout << "Pointer p1 after reset"<<*p1.get() << "\n";
    std::cout << "Pointer p1 new address"<<p1.get() << "\n";
    p1.reset();
    std::cout << "Pointer p2 count after reset: "<<p2.use_count() << "\n";
    std::cout << "Pointer p1 count after reset: "<<p1.use_count() << "\n";

    std::cout <<static_cast<bool> (p2) << "\n";
					  p2.shared_ptr(Y *p, D d)
  }
