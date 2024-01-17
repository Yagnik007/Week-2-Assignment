#include <iostream>

using namespace std;

class Game
{
public:
    void play()
    {
        initialize();
        startPlay();
        endPlay();
    }

protected:
    virtual void initialize() = 0;
    virtual void startPlay() = 0;
    virtual void endPlay() = 0;
};

int main()
{
    return 0;
}
