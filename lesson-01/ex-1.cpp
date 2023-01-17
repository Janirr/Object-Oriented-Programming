#include <iostream>

class Develope{
	public:
		std::string name;
		int founded;
		Develope(){this->name=name;this->founded=founded;}
		Develope(std::string name_, int founded_):name{name_},founded{founded_}{}
};

class Game{
	private:
		std::string name;
		float priceUSD;
		Develope &develope; //private access to the class
		int players;
	public:
		//Game(){}
		Game(std::string name_,float priceUSD_,Develope &develope_,int players_):name{name_},priceUSD{priceUSD_},develope{develope_},players{players_}{}
		void info(){std::cout<<"Name: "<<name<<" | Price: "<<priceUSD<<" $ | Players: "<<players<<std::endl;}
		void devinfo(){std::cout<<"Develope: "<<develope.name<<" founded in: "<<developer.founded;}
};

int main(){
	Develope EA("EA SPORTS",1982);
	Game fifa21("FIFA 21",49.99f,EA,986);
	fifa21.info();
	fifa21.devinfo();
    return 0;
}
