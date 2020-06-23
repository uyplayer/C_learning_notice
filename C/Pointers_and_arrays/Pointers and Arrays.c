#include "stdio.h"
int main(int argc, char const *argv[])



  return 0;
}

float KrazyFunction(struct Mystruct *parm1,int plsize , int bb){

int ix;
for (ix=0;ix<plsize;ix++){

      if(parm1[ix].m_aNumber == bb){

        return parm1[ix].num2;

      }

    return 0.0f;

}

}
