#include <stdafx.h>
#include "header_Math.ai.h"
void* HexPrinter::operator new(size_t objectSize,void* place){
   HexPrinter* obj=(HexPrinter*)place;   return obj; 
} 
void HexPrinter::destroy_sappeur_internal(){delete this;}

