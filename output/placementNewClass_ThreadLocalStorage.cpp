#include <stdafx.h>
#include "header_Math.ai.h"
void* ThreadLocalStorage::operator new(size_t objectSize,void* place){
   ThreadLocalStorage* obj=(ThreadLocalStorage*)place;    SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >::operator new(sizeof(SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >),(char*)&(obj->_entries),1000);  return obj; 
} 
void ThreadLocalStorage::destroy_sappeur_internal(){delete this;}

