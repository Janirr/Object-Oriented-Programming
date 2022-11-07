#include <iostream>

class Developer{
	public:
		std::string name;
		int founded;
		Developer(std::string name_, int founded_):name{name_},founded{founded_}{}
};

class Game{
	private:
		std::string name;
		float priceUSD;
		Developer &developer;
		int players;
	public:
		//Game(){this->name="";this->priceUSD=0.0f;this->developer="";this->players=0;}
		Game(std::string name_,float priceUSD_,Developer &developer_,int players_):name{name_},priceUSD{priceUSD_},developer{developer_},players{players_}{}
		void info(){std::cout<<"Name: "<<name<<" | Price: "<<priceUSD<<" $ |"<<" Developer: "<<developer.name<<" founded in: "<<developer.founded<<" | Players: "<<players;}
};

int main(){
	Developer EA("EA SPORTS",1982);
	Game fifa21("FIFA 21",49.99f,EA,986);
	fifa21.info();
    return 0;
}
