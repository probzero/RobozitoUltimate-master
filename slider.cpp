#include "slider.h"

void slider::animaSlide(int direcao,float& tr){
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

slider::slider(imagem &img,float v,int d, int yy, int m){
	isFim = false;
	velocidade = v;
	tr= -1;
	//image = img;
	image.carregar("menu.png",0,256,1024,256);
	y = yy;
	dir = d;
	max = m;
}

void slider::intro(){
if(!isFim)
		{
			animaSlide(dir,tr);
		}
		else
		{
			animaSlide(-dir,tr);
		}

		image.desenha(tr,y);

		//itoa(trUp,buffer,10);

		//egl_texto(buffer,100,100);

		egl_depurar("tr: ", tr);
		
		egl_depurar("Fecho? : ", isFim);
		
		
			if(tr <= -max)
			{				
				isFim = true;
				tr = -max+1;
				
			}			
}