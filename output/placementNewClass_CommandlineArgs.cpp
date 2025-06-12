#include <stdafx.h>
#include "header_Math.ai.h"
void* CommandlineArgs::operator new(size_t objectSize,void* place){
   CommandlineArgs* obj=(CommandlineArgs*)place;   return obj; 
} 
void CommandlineArgs::destroy_sappeur_internal(){delete this;}

