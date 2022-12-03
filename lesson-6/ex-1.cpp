#include <iostream>
#include <cmath>

using namespace std;
class Number{
    public: 
    int a;
    Number(int a_):a{a_}{}
    double doubleValue(int a){return double(a);}
};
class Comparison{
private:
    float a;
    float b;
public:
Comparison(int a, int b){this->a=a;this->b=b;}
  int max()
  {
      return a > b ? a : b;
  }
  int min()
  {
      return a < b ? a : b;
  }
  float avg()
  {
      return ((a + b) / 2);
  }
  
};
class Logarithm{
private:
    double base, argument;
public:
    double doubleValue() { if (this->argument < 0){if (this->base < 0){return -1;}}{return log(this->argument) / log(this->base);}}
    Logarithm(double inputBase, double inputArgument) {
        if (inputBase > 0){this->base = inputBase;}
        else {this->base = -1 * inputBase;}
        if (inputArgument > 0){this->argument = inputArgument;}
        else {this->argument = -1 * inputArgument;}
        
    }
};
int main()
{
    Number a(5);
    Number b(6);

    Comparison c(5,6)
    cout << c.max() << endl;
    cout << c.min() << endl;
    cout << c.avg() << endl;

    Logarithm d(-5,-7);
    cout << d.doubleValue() << endl;
    
    return 0;
}
