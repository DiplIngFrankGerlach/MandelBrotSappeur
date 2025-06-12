#include <stdafx.h>
#include "header_Math.ai.h"
void* SPRFile::operator new(size_t objectSize,void* place){
   SPRFile* obj=(SPRFile*)place;   return obj; 
} 
void SPRFile::destroy_sappeur_internal(){delete this;}

