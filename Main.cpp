#include <iostream>
#include "Player.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"

int main() {
    Player player;
    UI ui;
    SoundSystem sound;
    ScoreSystem score;
    Enemy enemy;

    player.AddObserver(&ui);
    player.AddObserver(&sound);
    player.AddObserver(&score);
    player.AddObserver(&enemy);

    // Simulasi dua aksi berbeda
    std::cout << "--- First Action ---" << std::endl;
    player.Attack();

    std::cout << "\n--- Second Action ---" << std::endl;
    player.Attack();

    return 0;
}
