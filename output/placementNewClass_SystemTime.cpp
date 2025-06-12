#include <stdafx.h>
#include "header_Math.ai.h"
void* SystemTime::operator new(size_t objectSize,void* place){
   SystemTime* obj=(SystemTime*)place;   return obj; 
} 
void SystemTime::destroy_sappeur_internal(){delete this;}

