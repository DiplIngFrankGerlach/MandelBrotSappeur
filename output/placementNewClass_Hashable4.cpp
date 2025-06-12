#include <stdafx.h>
#include "header_Math.ai.h"
void* Hashable4::operator new(size_t objectSize,void* place){
   Hashable4* obj=(Hashable4*)place;    String_16::operator new(sizeof(String_16),(char*)&(obj->_Vorname));   String_16::operator new(sizeof(String_16),(char*)&(obj->_Ort));   String_16::operator new(sizeof(String_16),(char*)&(obj->_Nachname));   String_16::operator new(sizeof(String_16),(char*)&(obj->_Strasse));  return obj; 
} 
void Hashable4::destroy_sappeur_internal(){delete this;}

