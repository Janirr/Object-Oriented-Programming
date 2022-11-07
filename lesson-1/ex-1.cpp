#include <iostream>

class Developer{
	public:
		std::string name;
		int founded;
		Developer(){this->name=name;this->founded=founded;}
		Developer(std::string name_, int founded_):name{name_},founded{founded_}{}
};

class Game{
	private:
		std::string name;
		float priceUSD;
		Developer &developer; //private access to the class
		int players;
	public:
		//Game(){}
		Game(std::string name_,float priceUSD_,Developer &developer_,int players_):name{name_},priceUSD{priceUSD_},developer{developer_},players{players_}{}
		void info(){std::cout<<"Name: "<<name<<" | Price: "<<priceUSD<<" $ | Players: "<<players<<std::endl;}
		void devinfo(){std::cout<<"Developer: "<<developer.name<<" founded in: "<<developer.founded;}
};

int main(){
	Developer EA("EA SPORTS",1982);
	Game fifa21("FIFA 21",49.99f,EA,986);
	fifa21.info();
	fifa21.devinfo();
    return 0;
}
