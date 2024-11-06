#pragma once
#include <iostream>
using namespace std;

class Remote; 

class TV {
    const size_t maxChannel = 100;  
    const size_t maxVolume = 100;   

    bool status = false;  
    size_t channel = 1;   
    size_t volume = 1;    

public:
    TV(size_t channel = 1, size_t volume = 1, bool status = false, size_t maxChannel = 100, size_t maxVolume = 100)
        : channel(channel), volume(volume), status(status), maxChannel(maxChannel), maxVolume(maxVolume) {}

    void power() { status = !status; }  
    void nextChannel();  
    void prevChannel();  
    void incVolume();  
    void decVolume();   
    void printInfo() const;  

    friend class Remote;
};