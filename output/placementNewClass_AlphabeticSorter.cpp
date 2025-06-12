#include <stdafx.h>
#include "header_System.ai.h"
void* AlphabeticSorter::operator new(size_t objectSize,void* place){
   AlphabeticSorter* obj=(AlphabeticSorter*)place;    SPRStackArrayConcrete<AlphaEntry,36>::operator new(sizeof(SPRStackArrayConcrete<AlphaEntry,36>),(char*)&(obj->_alphabet),36);  return obj; 
} 
void AlphabeticSorter::destroy_sappeur_internal(){delete this;}

