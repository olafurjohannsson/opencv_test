
#include <cstdlib>
#include <iostream>

#define r0(p,q,r,s) 0x##p##q##r##s


int main() 
{

    unsigned tgtaddr = 123456 & 0x00FFFFFF;

    unsigned f = r0(b,e,a,f);


    printf("0x%x\n", tgtaddr);
    printf("0x%x\n", f);

    return 0;

}
