#include<allegro5/allegro.h>
#include<allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_font.h>

#define width 800
#define height 600

int main()
{
	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "Could not initalize allegro5", NULL, NULL);
	}

	al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
	ALLEGRO_DISPLAY *display = al_create_display(width, height);
	al_set_window_position(display, 200, 100);
	al_set_window_title(display, "Title goes here");

	if (!display)
	{
		al_show_native_message_box(display, "Sample", "Display Settings", "Could not initalize allegro Window", NULL, NULL);
	}

	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_FONT *font = al_load_font("orbitron-black.ttf", 36, NULL);
	al_draw_text(font, al_map_rgb(44, 177, 255), width / 2, 150, ALLEGRO_ALIGN_CENTRE, "Kshir Ramruthan");
	al_draw_text(font, al_map_rgb(44, 177, 255), width / 2, 225, ALLEGRO_ALIGN_CENTRE, "Denver Pillay");
	al_draw_text(font, al_map_rgb(44, 177, 255), width / 2, 300, ALLEGRO_ALIGN_CENTRE, "Raaghav Maharaj");

	al_flip_display();
	al_destroy_font(font);
	al_rest(INT_MAX/1.0);
	al_destroy_display(display);
	return 0;
}