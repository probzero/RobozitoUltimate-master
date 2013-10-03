#include "animacao.h"


animacao::animacao(void)
{
	isFim = false;
	velocidade = 25;
	trUp = 1;
	trMid = -1;
	trDown = 1;

	imgPt1.carregar("menu.png",0,0,1024,256);
	imgPt2.carregar("menu.png",0,256,1024,256);
	imgPt3.carregar("menu.png",0,512,1024,256);

	//middle = new slider(imgPt2,20,esquerda,256,1025);
}


animacao::~animacao(void)
{
}

void animacao::animaSlide(int direcao, float &tr)
{
	switch(direcao)
	{
		case 1:
			tr += 1 * (velocidade/100);
			break;
		case 2:
			tr -= 1  * (velocidade/100);
			//tr = -tr;
			break;
	}
}

void animacao::intro()
{

	 if((!key[SDLK_RETURN]))
	 {
			//egl_depurar("Up: ", trUp);
		//	egl_depurar("Mid: ", trMid);
		//	egl_depurar("Down: ", trDown);
		//	egl_depurar("Finalizo? ", isFim);

		// middle->intro();
		if(!isFim)
		{
			animaSlide(direita,trUp);
			animaSlide(esquerda,trMid);
			animaSlide(direita,trDown);
		}
		else
		{
			animaSlide(esquerda,trUp);
			animaSlide(direita,trMid);
			animaSlide(esquerda,trDown);
		}

		imgPt1.desenha(trUp,0);
		imgPt2.desenha(trMid,256);
		imgPt3.desenha(trDown,512);

		itoa(trUp,buffer,10);

		egl_texto(buffer,100,100);

			egl_desenha_frame();
		
			if(trUp >= 1025)
			{
				
				isFim = true;
				trUp = trDown = 1024;
				trMid = -1024;
			}

	}
	
	

	/* Encerrar a animacao e reinciciala caso
	jogador nao pressione ENTER
	*/
		


	
}

