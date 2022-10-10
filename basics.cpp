#include <iostream>
using namespace std;
class Player{
	public:
		int age;
		string name;
		int height;
		int goals;
		int assists;
		string club;
		void info();
};

void Player::info(){
	cout << "Imię: " << name << endl;
	cout << "Wiek: " << age << endl;
	cout << "Wzrost: " << height << endl;
	cout << "Gole: " << goals << endl;
	cout << "Asysty: " << assists << endl;
}
		 
class Club{
	public:
		string name;
		int founded;
		void info();
};

void Club::info(){
	cout << "Nazwa klubu: " << name << endl;
	cout << "Rok założenia: " << founded << endl;
}

int main() {
	
	
	Club barcelona;
	
	barcelona.name = "FC Barcelona";
	barcelona.founded = 1899;
	
	Player lewandowski;
	
	lewandowski.age = 32;
	lewandowski.name = "Robert";
	lewandowski.height = 185;
	lewandowski.goals = 264;
	lewandowski.assists = 54;
	lewandowski.club = "FC Barcelona;
	lewandowski.info();

	return 0;
}
