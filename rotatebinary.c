#include "rotatebinary.h"
void rotateLeft(uint8 * x,int y){

*x= (*x<<y)|(*x>>(8-y));

}

void rotateRight(uint8 * x,int y){

*x= (*x>>y)|(*x<<(8-y));

}
