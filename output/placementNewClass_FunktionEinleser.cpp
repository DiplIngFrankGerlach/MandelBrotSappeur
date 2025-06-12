#include <stdafx.h>
#include "header_FunktionalRechner.ai.h"
void* FunktionEinleser::operator new(size_t objectSize,void* place){
   FunktionEinleser* obj=(FunktionEinleser*)place;    SPRSmartPtr<String_16>::operator new(sizeof(SPRSmartPtr<String_16>),(char*)&(obj->wortPuffer));   PrintfClass::operator new(sizeof(PrintfClass),(char*)&(obj->pfc));   SPRSmartPtr<Scanner>::operator new(sizeof(SPRSmartPtr<Scanner>),(char*)&(obj->wortLeser));  return obj; 
} 
void FunktionEinleser::destroy_sappeur_internal(){delete this;}

