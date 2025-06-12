#include <stdafx.h>
#include "header_BMP_Erzeuger_SW.ai.h"
void* BMP_Erzeuger_SW::operator new(size_t objectSize,void* place){
   BMP_Erzeuger_SW* obj=(BMP_Erzeuger_SW*)place;    PrintfClass::operator new(sizeof(PrintfClass),(char*)&(obj->pfc));  return obj; 
} 
void BMP_Erzeuger_SW::destroy_sappeur_internal(){delete this;}

