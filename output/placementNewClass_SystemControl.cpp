#include <stdafx.h>
#include "header_Math.ai.h"
void* SystemControl::operator new(size_t objectSize,void* place){
   SystemControl* obj=(SystemControl*)place;   return obj; 
} 
void SystemControl::destroy_sappeur_internal(){delete this;}

