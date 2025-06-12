#include <stdafx.h>
#include "header_Math.ai.h"
void* Benutzer_Umschalter::operator new(size_t objectSize,void* place){
   Benutzer_Umschalter* obj=(Benutzer_Umschalter*)place;   return obj; 
} 
void Benutzer_Umschalter::destroy_sappeur_internal(){delete this;}

