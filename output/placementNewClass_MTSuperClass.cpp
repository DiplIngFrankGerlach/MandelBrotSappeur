#include <stdafx.h>
#include "header_Math.ai.h"
DWORD WINAPI SPRGeneratedStartThread_MTSuperClass(LPVOID iThreadParam)
{
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
TlsSetValue(__spr_tls,tlsList);
MTSuperClass* tp=(MTSuperClass*)iThreadParam;
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* MTSuperClass::operator new(size_t objectSize,void* place){
   MTSuperClass* obj=(MTSuperClass*)place;   return obj; 
} 
void MTSuperClass::destroy_sappeur_internal(){delete this;}

