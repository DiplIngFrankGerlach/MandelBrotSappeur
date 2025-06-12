#include <stdafx.h>
#include "header_ZKNuetzlich.ai.h"
void* StringScanf::operator new(size_t objectSize,void* place){
   StringScanf* obj=(StringScanf*)place;    ZKNuetzlich::operator new(sizeof(ZKNuetzlich),(char*)&(obj->zkn));   String_16::operator new(sizeof(String_16),(char*)&(obj->str));  return obj; 
} 
void StringScanf::destroy_sappeur_internal(){delete this;}

