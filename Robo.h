#pragma once
#include <string>
#include "engcomp_glib.h"
using namespace std;

class Robo
{
private:
	int nivel, atk, def, hp, dano, deslocamento, alcance;
	string nome;
	imagem robo;
public:
	Robo(void);
	~Robo(void);
	// Sets
	void setNivel(int nivel); // esse nivel nao e o mesmo que o private
	void updateStatus(); // Update dos atributos basicos baseado no nivel
	void setNome(string nome); // nome do Robo do jogador e não do jogador
	void setAtk(int atk); 
	void setDef(int def);
	void setHP(int hp);
	void setDano(int dano);
	void setDeslocamento(int deslocamento);
	void setAlcance(int alcance);
	void setImagem (imagem); // imagem do robo, sprites e animacao do mesmo

	// Gets
	int getNivel(); // recupera nivel do robo
	void equiparItens(); // ira modificar os status do robo depedendo dos itens que forem equipados
	int getAtk(); 
	int getDef();
	int getHP();
	int getDano();
	int getDeslocamento(); 
	int getAlcance();
	string getNome();
	// abstratos

	virtual void atacar() = 0;
	virtual void andar() = 0;
	virtual void defender() = 0;

};

 
