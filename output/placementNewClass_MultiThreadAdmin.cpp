#include <stdafx.h>
#include "header_Math.ai.h"
void* MultiThreadAdmin::operator new(size_t objectSize,void* place){
   MultiThreadAdmin* obj=(MultiThreadAdmin*)place;   return obj; 
} 
void MultiThreadAdmin::destroy_sappeur_internal(){delete this;}

