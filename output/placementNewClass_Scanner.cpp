#include <stdafx.h>
#include "header_Scanner.ai.h"
void* Scanner::operator new(size_t objectSize,void* place){
   Scanner* obj=(Scanner*)place;    SPRSmartPtr<String_16>::operator new(sizeof(SPRSmartPtr<String_16>),(char*)&(obj->_currentToken));   SPRSmartPtr<SPRFile>::operator new(sizeof(SPRSmartPtr<SPRFile>),(char*)&(obj->_f));   String_16::operator new(sizeof(String_16),(char*)&(obj->zkEingabe));  return obj; 
} 
void Scanner::destroy_sappeur_internal(){delete this;}

