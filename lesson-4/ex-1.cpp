#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class PowerUsage {
  public:
    virtual int watsneeded();
    
};
class Monitor : public PowerUsage {
  private:
    int quantity;
    int wats;
  public:
    Monitor(int quantity,int wats){this->quantity=quantity;this->wats=wats;}
    Monitor Additionwats(int supply){return Monitor(quantity,wats+supply);}
    int value(){return quantity*wats;} 
};
int main() {
  Monitor benq(2,230);
  Monitor benq5 = benq.Additionwats(5);
  cout << benq5.value();
  return 0;
}
