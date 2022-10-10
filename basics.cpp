#include <iostream>
using namespace std;
class Player{
	public:
		int age;
		string name;
		int height;
		int goals;
		int assists;
};

int main() {
	Player lewandowski;
	lewandowski.age = 34;
	lewandowski.name = "Robert";
	lewandowski.height = 185;
	lewandowski.goals = 401;
	lewandowski.assists = 103;
	
	return 0;
}
