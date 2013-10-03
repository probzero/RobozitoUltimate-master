#include "Robo.h"


Robo::Robo(void)
{
}


Robo::~Robo(void)
{
}

void Robo::setNivel(int n)
{
	this->nivel = n;
}

int Robo::getNivel()
{
	return this->nivel;
}

void Robo::setNome(string n)
{
	this->nome =n;
}

void Robo::setAtk(int a)
{
	this->atk = a;
}

void Robo::setDef(int d)
{
	this->def = d;
}

void Robo::setHP(int h)
{
	this->hp =h;
}

void Robo::setDano(int d)
{
	this->dano =d;
}

void Robo::setDeslocamento(int d)
{
	this->deslocamento = d;
}

void Robo::setAlcance(int a)
{
	this->alcance = a;
}

int Robo::getAtk()
{
	return this->atk;
}

int Robo::getDef()
{
	return this->def;
}

int Robo::getHP()
{
	return this->hp;
}

int Robo::getDano()
{
	return this->dano;
}

int Robo::getDeslocamento()
{
	return this->deslocamento;
}

int Robo::getAlcance()
{
	return this->alcance;
}

string Robo::getNome()
{
	return this->nome;
}
