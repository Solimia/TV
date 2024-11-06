#include "TV.h"
using namespace std;

void TV::nextChannel() {
    if (status && channel < maxChannel) 
    {
        ++channel;
    }
}

void TV::prevChannel() {
    if (status && channel > 1)
    {
        --channel;
    }
}

void TV::incVolume() {
    if (status && volume < maxVolume)
    {
        ++volume;
    }
}

void TV::decVolume() {
    if (status && volume > 0) 
    {
        --volume;
    }
}

void TV::printInfo() const 
{
    cout << "TV : " << (status ? "ON" : "OFF")
        << ", active channel: " << channel
        << ", volume: " << volume << endl;
}