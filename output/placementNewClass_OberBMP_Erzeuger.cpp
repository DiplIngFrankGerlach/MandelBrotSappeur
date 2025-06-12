#include <stdafx.h>
#include "header_OberBMP_Erzeuger.ai.h"
void* OberBMP_Erzeuger::operator new(size_t objectSize,void* place){
   OberBMP_Erzeuger* obj=(OberBMP_Erzeuger*)place;   return obj; 
} 
void OberBMP_Erzeuger::destroy_sappeur_internal(){delete this;}

