#include <stdafx.h>
#include "header_Math.ai.h"
void* Logfile::operator new(size_t objectSize,void* place){
   Logfile* obj=(Logfile*)place;   return obj; 
} 
void Logfile::destroy_sappeur_internal(){delete this;}

