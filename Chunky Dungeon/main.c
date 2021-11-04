#include <gb/gb.h>
#include <stdio.h>
#include <gb/font.h>
#include "backgrounds/background_data.c"
#include "backgrounds/background_map.c"

#include "sprites/door.c"
#include "sprites/doorLeft.c"

void pdelay(UINT8 numloops) {
	UINT8 i;
	for (i = 0; i < numloops; i++)
		wait_vbl_done();
}

void main() {


	//font_t font;
	//font_init();
	//font = font_load(font_ibm);
	//font_set(font);
	//set_win_tiles(0, 0, 141, 1, test);


	set_bkg_data(0, 22, background_data);
	set_bkg_tiles(0, 0, 20, 18, background_map);

	set_sprite_data(0, 4, door);
	set_sprite_data(4, 4, doorLeft);

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




	//SHOW_WIN;
	SHOW_BKG;
	DISPLAY_ON;
	SHOW_SPRITES;


	while (1) {



	}



}