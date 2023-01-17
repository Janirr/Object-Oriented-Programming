#include <iostream>
#include <assert.h>
#include <memory>

class Game
{
public:
    virtual std::string result() = 0;
};


class FakeFootballGame: public Game {
public:
    std::string result() override {
        return "4 - 3";
    }
};

int main(void)
{
    auto game = std::unique_ptr<Game>( new FakeFootballGame );

    assert(game->result() == "4 - 3");
    std::cout << "OK" << std::endl;
    
    assert(game->result() == "4 - 4");
    std::cout << "OK" << std::endl;
    return 0;

}
