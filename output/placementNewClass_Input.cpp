#include <stdafx.h>
#include "header_Math.ai.h"
void* Input::operator new(size_t objectSize,void* place){
   Input* obj=(Input*)place;   return obj; 
} 
void Input::destroy_sappeur_internal(){delete this;}

