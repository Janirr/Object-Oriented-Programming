#include <iostream>

class Points{
	public:
		float a,b;
		Points() = default;
		Points(float a_, float b_):a{a_},b{b_}{}
};

class Calculator{
	private:
		Points &points;
	public:
	  Calculator() = default;
		Calculator(Points &points_):points{points_}{}
		float substract(){float result = points.a-points.b; std::cout<<result<<std::endl;}
		float add(){float result = points.a+points.b; std::cout<<result<<std::endl;}
		float multiply(){float result = points.a*points.b; std::cout<<result<<std::endl;}
		float divide(){float result = points.a/points.b; std::cout<<result<<std::endl;}

};

int main(){
	Points ab(5,6);
	Calculator calc(ab);
	calc.add();
	calc.substract();
	calc.multiply();
	calc.divide();
  return 0;
}
