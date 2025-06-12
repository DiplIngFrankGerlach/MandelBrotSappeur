#include <stdafx.h>
#include "header_Math.ai.h"
void* SystemConstants::operator new(size_t objectSize,void* place){
   SystemConstants* obj=(SystemConstants*)place;   return obj; 
} 
void SystemConstants::destroy_sappeur_internal(){delete this;}

