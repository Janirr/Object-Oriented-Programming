#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Animal {
  public:
    virtual std::string type();
    
};

int Hardware::watsNeeded() {
    return 0;
}

class Monitor : public Hardware {
  private:
    int quantity;
    int wats;
  public:
    Monitor(int quantity,int wats){this->quantity=quantity;this->wats=wats;}
    Monitor addWats(int supply){return Monitor(quantity,wats+supply);}
    int value(){return quantity*wats;} 
};
int main() {
  Monitor benq(2,230);
  Monitor benq5 = benq.addWats(5);
  cout << benq5.value();
  return 0;
}
