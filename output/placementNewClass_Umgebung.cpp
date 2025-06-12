#include <stdafx.h>
#include "header_Math.ai.h"
void* Umgebung::operator new(size_t objectSize,void* place){
   Umgebung* obj=(Umgebung*)place;   return obj; 
} 
void Umgebung::destroy_sappeur_internal(){delete this;}

