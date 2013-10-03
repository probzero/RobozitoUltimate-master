#include "Inimigo.h"


Inimigo::Inimigo(string *n, int l)
{
	this->nome = n;
	this->level = l;
}


Inimigo::~Inimigo(void)
{
}

void Inimigo::atacar()
{

}

void Inimigo::defender()
{

}

void Inimigo::andar()
{

}

int Inimigo::getLevel()
{
	return this-> level;
}

string *Inimigo::getNome() const
{
	return this->nome;
}