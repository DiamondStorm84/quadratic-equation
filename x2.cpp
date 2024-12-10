#include <iostream> 
#include <cmath>

int main(){

    double a;
    double b;
    double c;
    
    std::cout << "a=" ;
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    std::cout << "c=";
    std::cin >> c;

   
    double d= b * b- 4 *a * c;
    
     double z=sqrt(d);
    

    double q=(-b+z)/(2*a);
    std::cout << q << '\n';
    double f=(-b-z)/(2*a);
    std::cout << f;



    return 0;
}