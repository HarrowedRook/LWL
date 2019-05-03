#ifndef _SPRITE_H
#define _SPRITE_H

#include "stdafx.h"
#include "SDL.h"

class Sprite
{
public:
	Sprite();
	~Sprite();
private:
	int m_x, m_y, m_width, m_height;
	int m_spriteX, m_spriteY, m_spriteWidth, m_spriteHeight;

	SDL_Color m_color;

	SDL_Texture * m_texture;
};
#endif