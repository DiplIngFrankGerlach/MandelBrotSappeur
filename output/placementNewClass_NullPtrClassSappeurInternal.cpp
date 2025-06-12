#include <stdafx.h>
#include "header_Math.ai.h"
void* NullPtrClassSappeurInternal::operator new(size_t objectSize,void* place){
   NullPtrClassSappeurInternal* obj=(NullPtrClassSappeurInternal*)place;   return obj; 
} 
void NullPtrClassSappeurInternal::destroy_sappeur_internal(){delete this;}

