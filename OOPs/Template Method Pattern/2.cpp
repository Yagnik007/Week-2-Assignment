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

class Football : public Game
{
protected:
    void initialize() override
    {
        cout << "Football Game Initialized! Start playing." << endl;
    }

    void startPlay() override
    {
        cout << "Football Game Started. Enjoy the game!" << endl;
    }

    void endPlay() override
    {
        cout << "Football Game Finished. Thank you for playing!" << endl;
    }
};

class Basketball : public Game
{
protected:
    void initialize() override
    {
        cout << "Basketball Game Initialized! Start playing." << endl;
    }

    void startPlay() override
    {
        cout << "Basketball Game Started. Enjoy the game!" << endl;
    }

    void endPlay() override
    {
        cout << "Basketball Game Finished. Thank you for playing!" << endl;
    }
};

int main()
{

    Football footballGame;
    Basketball basketballGame;

    cout << "Playing Football:" << endl;
    footballGame.play();

    cout << "\nPlaying Basketball:" << endl;
    basketballGame.play();

    return 0;
}
