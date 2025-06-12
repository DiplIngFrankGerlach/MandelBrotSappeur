#include <stdafx.h>
#include "header_Math.ai.h"
void* ThreadLocalStorageList::operator new(size_t objectSize,void* place){
   ThreadLocalStorageList* obj=(ThreadLocalStorageList*)place;    SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >::operator new(sizeof(SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >),(char*)&(obj->_entries),1000);  return obj; 
} 
void ThreadLocalStorageList::destroy_sappeur_internal(){delete this;}

