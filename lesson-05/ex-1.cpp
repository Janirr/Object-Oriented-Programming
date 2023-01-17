#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>

class FakeCantor {
 private:
  std::map<std::string, float> rates{{"USD", 1.0366f},
                                     {"GBP", 0.87063f},
                                     {"CHF", 0.9881f},
                                     {"JPY", 145.12f}};
 public:
  FakeCantor() = default;
  float ConvertToRate(const std::string &currency) {
    return rates[currency];
  };
};

class Currency {
 public:
  virtual Currency *AddedCurrency(float value, std::string currency) = 0;
  virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
  virtual std::string Abbreviation() = 0;
  virtual std::string Symbol() = 0;
  virtual float Balance() = 0;
  virtual float ExchangeRate() = 0;
};

class Euro : public Currency {
  private:
    std::string Euro_Symbol = "EUR";
    float Euro_Balance = 1.43f;
    std::string Euro_Abbreviation = "";
	float ExchangeRate = 4.70f;
	float euros;
	public:
	Euro *AddedCurrency(float value, std::string currency){Euro *e = new Euro(euros);return e;}
	Euro *SubstractedCurrency(float value, std::string currency){Euro *e = new Euro(euros-value);return e;}
	std::string Abbreviation(){return Euro_Abbreviation;}
	std::string Balance(){return Euro_Balance;}
	std::string Symbol(){return Euro_Symbol;}
	Euro(float euros){this->euros=euros;}

};

int main() {
  Euro euro(9.99f);
  return 0;
}
