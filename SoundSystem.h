#pragma once
#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

#include "IObserver.h"
#include <iostream>

class SoundSystem : public IObserver {
public:
    void Notify() override {
        std::cout << "SoundSystem: Play Attack Sound." << std::endl;
    }
};

#endif 
