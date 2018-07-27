#include <stdio.h>
#include <conio.h>
#include <tgi.h>
#include <peekpoke.h>

#include "data/william.h"


void blit_picture(unsigned char x, unsigned char y, unsigned char width,unsigned char height, unsigned char data[]) {
	unsigned char posx,posy;
	unsigned int i;
	posx=x;
	posy=y;
	for (i=2;i<width*height;i++) {
		POKE(0xa000+posx+posy*40,data[i]);
		posx++;
		if (posx==width+x) {
			posx=x;
			posy++;
		}
	}
}


/* Driver stuff */


int main () {

tgi_install (tgi_static_stddrv);

tgi_init ();
tgi_clear ();
blit_picture(1,1,william_pic[0]/6,william_pic[1], william_pic);
/*
tgi_outtextxy (50,50,"hello");
tgi_setpixel(200,100);
tgi_line(1,1,100,100);
*/
printf("Press a key to return to basic");
cgetc();

tgi_done();

return 0;
}



