#include <stdafx.h>
#include "header_Math.ai.h"
void* String_128::operator new(size_t objectSize,void* place){
   String_128* obj=(String_128*)place;   return obj; 
} 
void String_128::destroy_sappeur_internal(){delete this;}

