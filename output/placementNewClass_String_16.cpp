#include <stdafx.h>
#include "header_Math.ai.h"
void* String_16::operator new(size_t objectSize,void* place){
   String_16* obj=(String_16*)place;   return obj; 
} 
void String_16::destroy_sappeur_internal(){delete this;}

