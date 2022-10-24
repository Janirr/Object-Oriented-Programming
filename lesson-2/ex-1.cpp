#include <iostream>

//Task 1
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
//Task 2
class Sharpie{
	private:
		std::string nick;
		float quality;
		//in jail?
	public:
		Sharpie(){this->nick="";this->quality=0.0f;}
		Sharpie(std::string nick){this->nick=nick;this->quality=0.0f;}
		Sharpie(int quality){this->nick="";this->quality=float(quality);}
		Sharpie(float quality){this->nick="";this->quality=quality;}
		Sharpie(std::string nick_, float quality_):nick{nick_},quality{quality_}{}
		Sharpie(std::string nick_, int quality_):nick{nick_},quality{float(quality_)}{}
		void info(){std::cout<<nick<<" "<<quality<<std::endl;} //to do: fix;
		bool stoleHeadphones(){if (quality>5.0f){return 1;}else{return 0;}}
		bool isSuspicious(){if (quality>7.0f){return 1;}else{return 0;}}
	    
};
int main(){
	//Task 1
	Headphones jbl("jbl",430);
	jbl.info();
	//Task 2
	Sharpie rozpruwacz("kuba",5.4f);
	rozpruwacz.info();
	std::cout<<rozpruwacz.stoleHeadphones()<<std::endl;
	std::cout<<rozpruwacz.isSuspicious()<<std::endl;
    return 0;
}
