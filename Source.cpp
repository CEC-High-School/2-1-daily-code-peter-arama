#include <iostream>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro.h>
#include <allegro5\allegro_color.h>


using namespace std;
int main() {
	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY *display = al_create_display(500, 500);
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_line( 0, 200, 400, 200,al_map_rgb(0, 0, 0),3);
	al_draw_line( 200, 0, 200, 400, al_map_rgb(0, 0, 0),3);
	al_draw_arc(100, 100, 30, 2, 5, al_map_rgb(255, 70, 30), 5);
	al_draw_arc(200, 200, 40, 3, 6, al_map_rgb(250, 60, 40), 7);
	al_draw_ellipse(150, 150, 10, 10, al_map_rgb(125, 125, 125), 2);
	al_flip_display();
    al_rest(10);
	al_destroy_display(display);

	
}