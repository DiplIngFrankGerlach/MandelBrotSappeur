#include "stdafx.h"
#include "header_Scanner.ai.h"

Scanner::Scanner(char* stackStartPtr,SPRSmartPtr<SPRFile> f){
   char SPR_stack_dummy_var;
   _f=f;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _currentToken=::new String_16;
   _validBytes=0;
   _currentPtr=0;
   _filePos=0;
   _eof=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->nextChar(stackStartPtr);
   macheHilfsAusgabe=0;
   zkEingabeStelle=-1;
   
   
} //End Of Method

Scanner::Scanner(char* stackStartPtr,String_16& eingabe){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zkEingabe.assign(stackStartPtr,eingabe);
   zkEingabeStelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _currentToken=::new String_16;
   macheHilfsAusgabe=0;
   _eof=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->nextChar(stackStartPtr);
   
   
} //End Of Method

int Scanner::isLetter(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':case 'i':case 'j':case 'k':case 'l':case 'm':case 'n':case 'o':case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':case 'x':case 'y':case 'z':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int Scanner::isNumeral(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };break;
      
      
   }
   return 0;
   
   
} //End Of Method

void Scanner::log(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(macheHilfsAusgabe!=0){
      PrintfClass pfc;
      SPRStackArrayConcrete<char,7> spr_StringScratch0;strcpy(spr_StringScratch0._array,"[$ $]");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch0).sa(stackStartPtr,_currentTokenType).sa(stackStartPtr,_currentToken).pr(stackStartPtr);
      SPRStackArrayConcrete<char,7> spr_StringScratch1;strcpy(spr_StringScratch1._array,"sinus");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(_currentToken._theObject->equals(stackStartPtr,spr_StringScratch1)==1){
         SPRStackArrayConcrete<char,11> spr_StringScratch2;strcpy(spr_StringScratch2._array,"log sinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch2).pr(stackStartPtr);
         
      }
      
   }
   
   
} //End Of Method

void Scanner::setLogging(char* stackStartPtr,int ww){
   char SPR_stack_dummy_var;
   macheHilfsAusgabe=ww;
   
   
} //End Of Method

enum SPRTokenType Scanner::nextToken(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_eof==1){
      _currentTokenType=TOK_EOF;
      return TOK_EOF;
      
   }
   while(1==1){
      switch(_currentChar){
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':case 'i':case 'j':case 'k':case 'l':case 'm':case 'n':case 'o':case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':case 'x':case 'y':case 'z':{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            _currentToken._theObject->clear(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               _currentToken._theObject->append(stackStartPtr,_currentChar);
               this->nextChar(stackStartPtr);
               
            }
            while((_eof==0)&&((this->isLetter(stackStartPtr,_currentChar)==1)||(this->isNumeral(stackStartPtr,_currentChar)==1)||(_currentChar=='_')));
            _currentTokenType=TOK_STRING;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->log(stackStartPtr);
            return TOK_STRING;
            
         };break;
         
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            _currentToken._theObject->clear(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               _currentToken._theObject->append(stackStartPtr,_currentChar);
               this->nextChar(stackStartPtr);
               
            }
            while((_eof==0)&&(this->isNumeral(stackStartPtr,_currentChar)));
            _currentTokenType=TOK_NUMBER;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->log(stackStartPtr);
            return TOK_NUMBER;
            
         };break;
         
         case '\n':case ' ':{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               this->nextChar(stackStartPtr);
               if(_eof==1){
                  return TOK_EOF;
                  
               }
               
            }
            while((_currentChar==' ')||(_currentChar=='\n'));
            
         };break;
         
         case '+':case '-':case '/':case '*':case '(':case ')':case '{':{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            _currentToken._theObject->clear(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            _currentToken._theObject->append(stackStartPtr,_currentChar);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->nextChar(stackStartPtr);
            _currentTokenType=TOK_OPERATOR;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->log(stackStartPtr);
            return TOK_OPERATOR;
            
         };
         case '\0':{
            _currentTokenType=TOK_EOF;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            _currentToken._theObject->clear(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->log(stackStartPtr);
            return TOK_EOF;
            
         };
         default:{
            _currentTokenType=TOK_NONE;
            SPRStackArrayConcrete<char,15> spr_StringScratch3;strcpy(spr_StringScratch3._array,"<<<<ERROR>>>>");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            _currentToken._theObject->assign(stackStartPtr,spr_StringScratch3);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->log(stackStartPtr);
            return TOK_NONE;
            
         };
         
      }
      
   };
   _currentTokenType=TOK_NONE;
   SPRStackArrayConcrete<char,14> spr_StringScratch4;strcpy(spr_StringScratch4._array,"<<<<NONE>>>>");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _currentToken._theObject->assign(stackStartPtr,spr_StringScratch4);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->log(stackStartPtr);
   return TOK_NONE;
   
   
} //End Of Method

char Scanner::nextChar(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(zkEingabe.length(stackStartPtr)>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(zkEingabeStelle<zkEingabe.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         _currentChar=zkEingabe.getAt(stackStartPtr,zkEingabeStelle);
         zkEingabeStelle++;
         
      }
      else
      {
      _eof=1;
         _currentChar='@';
         }
      
   }
   else
   {
   if(_validBytes<=_currentPtr){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int n;n=_f._theObject->read(stackStartPtr,_filePos,_buffer._sz,_buffer);
         if(n<1){
            _eof=1;
            return ((char)0);
            
         }
         _validBytes=n;
         _filePos=_filePos+n;
         
      }
             int spr_intScratch5;spr_intScratch5=_currentPtr;chck_accs0(_buffer,spr_intScratch5,7)
      _currentChar=_buffer._array[spr_intScratch5];
      _currentPtr++;
      }
   return _currentChar;
   
   
} //End Of Method

void Scanner::getTokenBuf(char* stackStartPtr,SPRSmartPtr<String_16>& currentToken){
   char SPR_stack_dummy_var;
   currentToken=_currentToken;
   
   
} //End Of Method

void Scanner::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,30> spr_StringScratch7;strcpy(spr_StringScratch7._array,"../testDaten/test.funktional");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SPRFile> spf;spf=::new SPRFile(stackStartPtr,spr_StringScratch7,0);
   PrintfClass pfc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(spf._theObject->systemHandle(stackStartPtr)>=0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      Scanner s(stackStartPtr,spf);
      SPRSmartPtr<String_16> wortPuffer;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.getTokenBuf(stackStartPtr,wortPuffer);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(s.nextToken(stackStartPtr)){
         SPRStackArrayConcrete<char,4> spr_StringScratch8;strcpy(spr_StringScratch8._array,"$ ");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch8).sa(stackStartPtr,wortPuffer).pr(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      };
      
   }
   else
   {
   SPRStackArrayConcrete<char,38> spr_StringScratch9;strcpy(spr_StringScratch9._array,"Konnte Testdaten-Datei nicht oeffnen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch9).pr(stackStartPtr);
      }
   
   
} //End Of Method

enum SPRTokenType Scanner::currentTokenType(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return _currentTokenType;
   
   
} //End Of Method

