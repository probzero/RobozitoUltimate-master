#pragma once
#include "robo.h"
#include "string"
class Inimigo :
	public Robo
{
	string *nome;
	int level; 
public:
	Inimigo(string *, int level);
	~Inimigo(void);
	void atacar();
	void andar();
	void defender();
	
	// Pega o nivel para gravacao de arquivo
	int getLevel();
	string *getNome() const; // ultra sinistro, mago dos ponteiros
};

