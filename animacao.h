#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "engcomp_glib.h"
#include "slider.h"

#define direita 1
#define esquerda 2

class animacao
{

private:
	imagem imgPt1;
	imagem imgPt2;
	imagem imgPt3;
	bool isFim;
	float velocidade, trUp, trMid, trDown; 
	// ENUM TYPE para switch
	char buffer[6];
	slider *middle;


public:
	animacao(void);
	~animacao(void);

	void animaSlide(int,float&);
	void intro();
	
};

