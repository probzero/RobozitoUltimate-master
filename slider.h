#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "engcomp_glib.h"


#define direita 1
#define esquerda -1

class slider{
private:	
	imagem image;	
	bool isFim;
	float velocidade, tr; 
	int dir,y,max;

	void animaSlide(int,float&);

public:
	slider(imagem&,float,int,int,int);
	void intro();
};