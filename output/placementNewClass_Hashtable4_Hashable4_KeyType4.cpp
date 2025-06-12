#include <stdafx.h>
#include "header_Math.ai.h"
void* Hashtable4_Hashable4_KeyType4::operator new(size_t objectSize,void* place){
   Hashtable4_Hashable4_KeyType4* obj=(Hashtable4_Hashable4_KeyType4*)place;    SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > >::operator new(sizeof(SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > >),(char*)&(obj->_elements));  return obj; 
} 
void Hashtable4_Hashable4_KeyType4::destroy_sappeur_internal(){delete this;}

