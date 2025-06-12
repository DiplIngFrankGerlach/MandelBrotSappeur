#include <stdafx.h>
#include "header_System.ai.h"
void* AlphaEntry::operator new(size_t objectSize,void* place){
   AlphaEntry* obj=(AlphaEntry*)place;   return obj; 
} 
void AlphaEntry::destroy_sappeur_internal(){delete this;}

