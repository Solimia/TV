#include "TV.h"
#include "Remote.h"

int main()
{
    TV tv1(20, 30, false, 50, 30);
    tv1.printInfo();  
    tv1.power();      
    tv1.printInfo();  

    Remote remote(&tv1);  
    +remote;  
    tv1.printInfo();  

    ++remote;  
    tv1.printInfo();  

    TV tv2(5, 10);
    remote.chooseTV(&tv2);  
    remote.power();  
    tv2.printInfo();  

    +remote;  
    tv2.printInfo();  

    remote.goChannel(15);  
    tv2.printInfo();  

    return 0;
}