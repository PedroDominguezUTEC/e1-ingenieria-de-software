#include "game.h"

Game *Game::instance = 0;


int main(){
    Game* game = Game::getInstance();

    game->start();
}