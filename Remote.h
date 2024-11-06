#pragma once
#include "TV.h"

class Remote {
    TV* tv = nullptr;  

public:
    Remote(TV* tv = nullptr) : tv(tv) {}
    void chooseTV(TV* tv) { this->tv = tv; }

    void power() { if (tv) tv->power(); }
    void operator++() { if (tv) tv->nextChannel(); }  
    void operator--() { if (tv) tv->prevChannel(); }  
    void operator+() { if (tv) tv->incVolume(); }     
    void operator-() { if (tv) tv->decVolume(); }     
    void goChannel(size_t channel) { if (tv && channel <= tv->maxChannel) tv->channel = channel; }
};