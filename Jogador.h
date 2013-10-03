#pragma once
#include "Robo.h"

#define Chiyo 1
#define exia 2


using namespace std;

class Jogador :
	public Robo
{
private:
	imagem personagem;  
	imagem robo;
	int totalBatalhas;

/*
	 Esse personagem é do jogador no construtor ele passa o define que busca as relacões de animações e imagens em personagem
*/


public:


	Jogador(void); 
	~Jogador(void);
	void inicializar();
	int getTotalPartidas();
	void desenha(int tipo, int x, int y);
	void atacar();
	void andar();
	void defender();

};

