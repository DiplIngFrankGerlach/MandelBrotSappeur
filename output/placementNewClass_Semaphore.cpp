#include <stdafx.h>
#include "header_Math.ai.h"
void* Semaphore::operator new(size_t objectSize,void* place){
   Semaphore* obj=(Semaphore*)place;    SPRSmartPtr<SemaphoreInfo>::operator new(sizeof(SPRSmartPtr<SemaphoreInfo>),(char*)&(obj->_si));  return obj; 
} 
void Semaphore::destroy_sappeur_internal(){delete this;}

