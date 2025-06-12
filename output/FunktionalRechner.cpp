#include "stdafx.h"
#include "header_FunktionalRechner.ai.h"

FunktionEinleser::FunktionEinleser(char* stackStartPtr,String_16& eingabe){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortLeser=::new Scanner(stackStartPtr,eingabe);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortLeser._theObject->setLogging(stackStartPtr,0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortLeser._theObject->getTokenBuf(stackStartPtr,wortPuffer);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
   leseFehler=0;
   
   
} //End Of Method

FunktionEinleser::FunktionEinleser(char* stackStartPtr,SPRSmartPtr<SPRFile> f){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortLeser=::new Scanner(stackStartPtr,f);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortLeser._theObject->setLogging(stackStartPtr,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortLeser._theObject->getTokenBuf(stackStartPtr,wortPuffer);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
   leseFehler=0;
   
   
} //End Of Method

void FunktionEinleser::setzeX(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   wertX=x;
   
   
} //End Of Method

double FunktionEinleser::leseFunktionsEingabe(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(wortTyp==TOK_NUMBER){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      double ret;ret=((double)wortPuffer._theObject->asNumber(stackStartPtr));
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
      return ret;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch0;strcpy(spr_StringScratch0._array,"(");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((wortTyp==TOK_OPERATOR)&&(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch0)==1)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      return this->werteAus(stackStartPtr,0);
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch1;strcpy(spr_StringScratch1._array,"x");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((wortTyp==TOK_STRING)&&(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch1)==1)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
      return wertX;
      
   }
   leseFehler=1;
   return ((double)5);
   
   
} //End Of Method

double FunktionEinleser::werteAus(char* stackStartPtr,int leseNaechstenToken){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,3> spr_StringScratch2;strcpy(spr_StringScratch2._array,"(");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((wortTyp==TOK_OPERATOR)&&(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch2)==1)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(wortLeser._theObject->nextToken(stackStartPtr)==TOK_STRING){
         double a;
         double b;
         SPRStackArrayConcrete<char,5> spr_StringScratch3;strcpy(spr_StringScratch3._array,"mal");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch3)==1){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            a=this->leseFunktionsEingabe(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            b=this->leseFunktionsEingabe(stackStartPtr);
            SPRStackArrayConcrete<char,3> spr_StringScratch4;strcpy(spr_StringScratch4._array,")");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if((wortTyp==TOK_OPERATOR)&&(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch4)==1)){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
               return a*b;
               
            }
            else
            {
            SPRStackArrayConcrete<char,18> spr_StringScratch5;strcpy(spr_StringScratch5._array,") erwartet / mal");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratch5).pr(stackStartPtr);
               }
            
         }
         SPRStackArrayConcrete<char,7> spr_StringScratch6;strcpy(spr_StringScratch6._array,"sinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch6)==1){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            a=this->leseFunktionsEingabe(stackStartPtr);
            SPRStackArrayConcrete<char,3> spr_StringScratch7;strcpy(spr_StringScratch7._array,")");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if((wortTyp==TOK_OPERATOR)&&(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch7)==1)){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
               Math m;
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               return m.sinus(stackStartPtr,a);
               
            }
            else
            {
            SPRStackArrayConcrete<char,20> spr_StringScratch8;strcpy(spr_StringScratch8._array,") erwartet / sinus");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratch8).pr(stackStartPtr);
               }
            
         }
         SPRStackArrayConcrete<char,7> spr_StringScratch9;strcpy(spr_StringScratch9._array,"durch");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratch9)==1){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            a=this->leseFunktionsEingabe(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            b=this->leseFunktionsEingabe(stackStartPtr);
            SPRStackArrayConcrete<char,3> spr_StringScratcha;strcpy(spr_StringScratcha._array,")");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if((wortTyp==TOK_OPERATOR)&&(wortPuffer._theObject->equals(stackStartPtr,spr_StringScratcha)==1)){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               wortTyp=wortLeser._theObject->nextToken(stackStartPtr);
               return a/b;
               
            }
            else
            {
            SPRStackArrayConcrete<char,20> spr_StringScratchb;strcpy(spr_StringScratchb._array,") erwartet / durch");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratchb).pr(stackStartPtr);
               }
            
         }
         SPRStackArrayConcrete<char,25> spr_StringScratchc;strcpy(spr_StringScratchc._array,"unbekannte Funktion $ $");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchc).sa(stackStartPtr,wortTyp).sa(stackStartPtr,wortPuffer).pr(stackStartPtr);
         
      }
      
   }
   SPRStackArrayConcrete<char,30> spr_StringScratchd;strcpy(spr_StringScratchd._array,"Fehler in FunktionenEinleser");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchd).pr(stackStartPtr);
   leseFehler=1;
   return ((double)0);
   
   
} //End Of Method

void FunktionEinleser::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,30> spr_StringScratche;strcpy(spr_StringScratche._array,"../testDaten/test.funktional");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SPRFile> spf;spf=::new SPRFile(stackStartPtr,spr_StringScratche,0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(spf._theObject->systemHandle(stackStartPtr)>=0){
      double x;
      double inc;inc=0.1;
      double max;max=((double)300);
      {//begin of SPR for statement
      x=((double)0);
      while(x<=max){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         FunktionEinleser fe(stackStartPtr,spf);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         fe.setzeX(stackStartPtr,x);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         double y;y=fe.werteAus(stackStartPtr,1);
         SPRStackArrayConcrete<char,5> spr_StringScratchf;strcpy(spr_StringScratchf._array,"$;$");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchf).sa(stackStartPtr,x).sa(stackStartPtr,y).pr(stackStartPtr);
         x=x+inc;
         
      
      }
      }//end of SPR for statement
      
   }
   else
   {
   SPRStackArrayConcrete<char,38> spr_StringScratch10;strcpy(spr_StringScratch10._array,"Konnte Testdaten-Datei nicht oeffnen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch10).pr(stackStartPtr);
      }
   
   
} //End Of Method

int FunktionEinleser::warFehlerhaft(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return leseFehler;
   
   
} //End Of Method

