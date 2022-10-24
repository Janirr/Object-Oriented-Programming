#include <iostream>

class Headphones{
	private:
		std::string name;
		float price;
	public:
		Headphones(){this->name = ""; this->price=0.0f;}
		Headphones(std::string name_){this->name = name, this->price=0.0f;}
		Headphones(float price){this->name = "", this->price=price;}
		Headphones(int price){this->name = "", this->price=float(price);}
		Headphones(std::string name_, float price_):name{name_},price{price_}{}
		Headphones(std::string name_, int price_):name{name_},price{float(price_)}{}
		void info(){std::cout<<name<<" "<<price<<std::endl;} //to do: fix;
		
};

class Sharpie{
	private:
		std::string nick;
		float quality;
		//in jail?
	public:
	    Sharpie(){this->nick="";this->quality=0.0f;}
	    Sharpie(std::string nick){this->nick=nick;this->quality=0.0f;}
	    Sharpie(int quality){this->nick="";}
	    Sharpie(std::string nick_, float quality_):nick{nick_},quality{quality_}{}
	    Sharpie(std::string nick_, int quality_):nick{nick_},quality{float(quality_)}{}
	    void info(){std::cout<<nick<<" "<<quality<<std::endl;}
};
int main(){
	Headphones jbl(430);
	jbl.info();
	Sharpie rozpruwacz();
	rozpruwacz.info();
    return 0;
}
