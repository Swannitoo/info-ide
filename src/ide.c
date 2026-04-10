
#include <ncurses.h>
#include <string.

/*
Valentin (TREVAUX / NOYELLE)
Swann ARNAL
Projet Info 2026 : IDE
github.com/Swannitoo/info-ide
*/
int main(void) {
    WINDOW *boite;
    char *msg= "Valentin tais-toi par pitié";
    int taille= strlen(msg);
    
    initscr();
    while(1) {
        clear();
        mvprintw(LINES/2, (COLS / 2) - (taille / 2), msg);
        refresh();
        if(getch() != 410)
            break;
    }
    
    endwin();
    
    free(boite);
    
    return 0;
}
