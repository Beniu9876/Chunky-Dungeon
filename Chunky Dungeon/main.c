#include <gb/gb.h>
#include <stdio.h>
#include <gb/font.h>
#include "backgrounds/background_data.c"
#include "backgrounds/background_map.c"

#include "sprites/door.c"
#include "sprites/doorLeft.c"
#include "sprites/hero.c"

void pdelay(UINT8 numloops) {
	UINT8 i;
	for (i = 0; i < numloops; i++) {
		wait_vbl_done();
	}
}

BOOLEAN canWalk( UINT8 direction, UINT8 posx, UINT8 posy){
	if(direction==0){
		if(posy<=32){
			return 0;
		}else{
			return 1;
		}
	}else if(direction==1){
		if(posx<=24){
			return 0;
		}else{
			return 1;
		}
	}else if(direction==2){
		if(posx>=136){
			return 0;
		}else{
			return 1;
		}
	}else if(direction==3){
		if(posy>=128){
			return 0;
		}else{
			return 1;
		}
	}
}

void main() {


	UINT8 posx=80;
	UINT8 posy=88;
	UINT8 spriteindex=6;


	//font_t font;
	//font_init();
	//font = font_load(font_ibm);
	//font_set(font);
	//set_win_tiles(0, 0, 141, 1, test);


	set_bkg_data(0, 22, background_data);
	set_bkg_tiles(0, 0, 20, 18, background_map);

	set_sprite_data(0, 4, door);
	set_sprite_data(4, 4, doorLeft);
	set_sprite_data(8, 12, hero);

	set_sprite_tile(0, 0);//door up
	set_sprite_tile(1, 1);
	set_sprite_tile(2, 2);
	set_sprite_tile(3, 3);

	set_sprite_tile(4, 4);//door left
	set_sprite_tile(5, 5);
	set_sprite_tile(6, 6);
	set_sprite_tile(7, 7);

	set_sprite_tile(8, 4);//door right
	set_sprite_tile(9, 5);
	set_sprite_tile(10, 6);
	set_sprite_tile(11, 7);

	set_sprite_tile(12, 0);//door down
	set_sprite_tile(13, 1);
	set_sprite_tile(14, 2);
	set_sprite_tile(15, 3);

	set_sprite_tile(16, 8);//hero
	set_sprite_tile(17, 9);
	set_sprite_tile(18, 10);
	set_sprite_tile(19, 11);

	move_sprite(0, 80, 16);//door up
	move_sprite(1, 80, 24);
	move_sprite(2, 88, 16);
	move_sprite(3, 88, 24);
	
	move_sprite(4, 8, 80);//door left
	move_sprite(5, 8, 88);
	move_sprite(6, 16, 80);
	move_sprite(7, 16, 88);

	move_sprite(8, 160, 80);//door right
	move_sprite(9, 160, 88);
	move_sprite(10, 152, 80);
	move_sprite(11, 152, 88);
	set_sprite_prop(8, S_FLIPX);
	set_sprite_prop(9, S_FLIPX);
	set_sprite_prop(10, S_FLIPX);
	set_sprite_prop(11, S_FLIPX);

	move_sprite(12, 80, 152);//door down
	move_sprite(13, 80, 144);
	move_sprite(14, 88, 152);
	move_sprite(15, 88, 144);
	set_sprite_prop(12, S_FLIPY);
	set_sprite_prop(13, S_FLIPY);
	set_sprite_prop(14, S_FLIPY);
	set_sprite_prop(15, S_FLIPY);

	move_sprite(16, 80, 88);//hero
	move_sprite(17, 80, 96);
	move_sprite(18, 88, 88);
	move_sprite(19, 88, 96);

	
	//SHOW_WIN;
	SHOW_BKG;
	DISPLAY_ON;
	SHOW_SPRITES;

	


	while (1) {
	if(joypad() & J_LEFT){
		if(canWalk(1, posx, posy)==1){
			posx=posx-1;
			move_sprite(16,posx,posy);
			move_sprite(17,posx,posy+8);
			move_sprite(18,posx+8,posy);
			move_sprite(19,posx+8,posy+8);
		}
	}
	if(joypad() & J_RIGHT){
		if(canWalk(2, posx, posy)==1){
			posx=posx+1;
			move_sprite(16,posx,posy);
			move_sprite(17,posx,posy+8);
			move_sprite(18,posx+8,posy);
			move_sprite(19,posx+8,posy+8);
		}
	}
	if(joypad() & J_UP){
		if(canWalk(0, posx, posy)==1){
			posy=posy-1;
			move_sprite(16,posx,posy);
			move_sprite(17,posx,posy+8);
			move_sprite(18,posx+8,posy);
			move_sprite(19,posx+8,posy+8);
		}
	}
	if(joypad() & J_DOWN){
		if(canWalk(3, posx, posy)==1){
			posy=posy+1;
			move_sprite(16,posx,posy);
			move_sprite(17,posx,posy+8);
			move_sprite(18,posx+8,posy);
			move_sprite(19,posx+8,posy+8);
		}
	}

	if(spriteindex==64){
		spriteindex=0;
	}
	if(spriteindex==0){
		set_sprite_tile(16, 8);//hero
		set_sprite_tile(17, 9);
		set_sprite_tile(18, 10);
		set_sprite_tile(19, 11);
	}else if(spriteindex==16){
		set_sprite_tile(16, 12);//hero
		set_sprite_tile(17, 13);
		set_sprite_tile(18, 14);
		set_sprite_tile(19, 15);
	}else if(spriteindex==32){
		set_sprite_tile(16, 16);//hero
		set_sprite_tile(17, 17);
		set_sprite_tile(18, 18);
		set_sprite_tile(19, 19);
	}else if(spriteindex==48){
		set_sprite_tile(16, 12);//hero
		set_sprite_tile(17, 13);
		set_sprite_tile(18, 14);
		set_sprite_tile(19, 15);
	}


		spriteindex++;
		pdelay(1);
	}



}