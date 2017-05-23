
#include <cstdlib>
#include <iostream>

#define r0(p,q,r,s) 0x##p##q##r##s


int main() 
{

    unsigned tgtaddr = 123456 & 0x00FFFFFF;

    unsigned f = r0(b,e,a,f);


    printf("size %d\n", sizeof(tgtaddr));

    return 0;

}
