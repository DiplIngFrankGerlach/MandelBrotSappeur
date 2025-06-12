#include <stdafx.h>
#include "header_Math.ai.h"
void* PrintfClass::operator new(size_t objectSize,void* place){
   PrintfClass* obj=(PrintfClass*)place;    String_16::operator new(sizeof(String_16),(char*)&(obj->_fstr));   String_128::operator new(sizeof(String_128),(char*)&(obj->_outBuf));  return obj; 
} 
void PrintfClass::destroy_sappeur_internal(){delete this;}

