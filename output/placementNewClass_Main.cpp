#include <stdafx.h>
#include "header_AppMain.ai.h"
void* Main::operator new(size_t objectSize,void* place){
   Main* obj=(Main*)place;   return obj; 
} 
void Main::destroy_sappeur_internal(){delete this;}

