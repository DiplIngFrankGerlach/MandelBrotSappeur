#include <stdafx.h>
#include "header_BMP_Erzeuger_SW.ai.h"
void* BMP_Erzeuger::operator new(size_t objectSize,void* place){
   BMP_Erzeuger* obj=(BMP_Erzeuger*)place;    PrintfClass::operator new(sizeof(PrintfClass),(char*)&(obj->pfc));  return obj; 
} 
void BMP_Erzeuger::destroy_sappeur_internal(){delete this;}

