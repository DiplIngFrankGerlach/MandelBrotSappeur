#include <stdafx.h>
#include "header_Math.ai.h"
void* Mutex::operator new(size_t objectSize,void* place){
   Mutex* obj=(Mutex*)place;    SPRSmartPtr<MutexInfo>::operator new(sizeof(SPRSmartPtr<MutexInfo>),(char*)&(obj->_mi));  return obj; 
} 
void Mutex::destroy_sappeur_internal(){delete this;}

