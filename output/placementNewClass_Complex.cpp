#include <stdafx.h>
#include "header_Math.ai.h"
void* Complex::operator new(size_t objectSize,void* place){
   Complex* obj=(Complex*)place;   return obj; 
} 
void Complex::destroy_sappeur_internal(){delete this;}

