#include <stdafx.h>
#include "header_Math.ai.h"
void* Math::operator new(size_t objectSize,void* place){
   Math* obj=(Math*)place;   return obj; 
} 
void Math::destroy_sappeur_internal(){delete this;}

