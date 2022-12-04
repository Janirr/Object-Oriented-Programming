#include <iostream>
#include <cmath>
using namespace std;
class Comparison{
private:
    float a;
    float b;
public:
Comparison(float a, float b){this->a=a;this->b=b;}
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

int main()
{
    Comparison c(5.004f,6.9f);
    cout << c.max() << endl;
    cout << c.min() << endl;
    cout << c.avg() << endl;
    
    return 0;
}
