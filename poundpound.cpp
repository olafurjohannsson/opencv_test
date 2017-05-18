
#include <cstdlib>
#include <iostream>


int main() 
{

    unsigned tgtaddr = 123456 & 0x00FFFFFF;

    printf("0x%x\n", tgtaddr);


    return 0;

}
