#pragma once
#include"Player.h"
#include"Map.h"



class Game
{
private:
	Player player;
	Map map;


	int nowCounst;
	int prevCounst;

private:

    Player player;
    Map map;

    int nowCount;
    int prevCount;


public:

    Game();
    ~Game();
    bool Init();
    void Run();


private:

    void Update(float deltaTime);

    void Draw();
};

