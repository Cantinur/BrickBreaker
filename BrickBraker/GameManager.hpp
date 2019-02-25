//
//  GameManager.hpp
//  BrickBraker
//
//  Created by Henrik Anthony Odden Sandberg on 2/22/19.
//  Copyright © 2019 Henrik Anthony Odden Sandberg. All rights reserved.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include "Bricks.hpp"
#include "Ball.hpp"
#include "Paddle.hpp"
#include "InputManager.hpp"

class GameManager{
	
	
public:
	void playGame();
	void eventHandler(SDL_Event event);
	void Destroy();
	void winning();
	void initalize();
	void quiteGame();
	
private:
	bool quite = false;
	int WIDTH = 800, HIGHT = 600;
	int numberOfBrockenBricks = 0;
	
	SDL_Event event;
	
	SDL_Window *window;
	SDL_Renderer *renderer;
	
	SDL_Surface *ball;
	SDL_Texture *ballTexture;
	SDL_Rect ballrect;
	
	SDL_Surface *paddle;
	SDL_Texture *paddleTexture;
	SDL_Rect paddleRect;
	
	SDL_Surface *brick;
	SDL_Texture *bricktexture;
	
	Bricks _bricks;
	Paddle _paddle;
	Ball _ball;
	
	
};

#endif /* GameManager_hpp */
