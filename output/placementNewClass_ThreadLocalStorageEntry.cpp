#include <stdafx.h>
#include "header_Math.ai.h"
void* ThreadLocalStorageEntry::operator new(size_t objectSize,void* place){
   ThreadLocalStorageEntry* obj=(ThreadLocalStorageEntry*)place;   return obj; 
} 
void ThreadLocalStorageEntry::destroy_sappeur_internal(){delete this;}

