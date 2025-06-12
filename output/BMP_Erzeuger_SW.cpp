#include "stdafx.h"
#include "header_BMP_Erzeuger_SW.ai.h"

BMP_Erzeuger_SW::BMP_Erzeuger_SW(char* stackStartPtr,int groesseX,int groesseY,int farb1,int farb2){
   char SPR_stack_dummy_var;
   _breite=groesseX;
   _hoehe=groesseY;
   farbe1=farb1;
   farbe2=farb2;
   zeilenLaenge=groesseX/8;
   int m8;m8=groesseX%8;
   if(m8>0){
      zeilenLaenge++;
      
   }
   int m4;m4=zeilenLaenge%4;
   zeilenLaenge=zeilenLaenge+(4-m4);
   int spr_intScratch0;
   spr_intScratch0=(zeilenLaenge*groesseY)+54+8;
   if(spr_intScratch0<0)throw "invalid size requested for heap allocation";
   bildPuffer=new(spr_intScratch0) SPRArray<char>(spr_intScratch0)
   ;
   
   
} //End Of Method

void BMP_Erzeuger_SW::writeUI32(char* stackStartPtr,int& pos,int value){
   char SPR_stack_dummy_var;
          int spr_intScratch1;spr_intScratch1=pos;chck_accs_p0(bildPuffer,spr_intScratch1,3)
   bildPuffer._theObject->_array[spr_intScratch1]=((char)value&0xFF);
   pos++;
          int spr_intScratch3;spr_intScratch3=pos;chck_accs_p0(bildPuffer,spr_intScratch3,5)
   bildPuffer._theObject->_array[spr_intScratch3]=((char)(value>>8)&0xFF);
   pos++;
          int spr_intScratch5;spr_intScratch5=pos;chck_accs_p0(bildPuffer,spr_intScratch5,7)
   bildPuffer._theObject->_array[spr_intScratch5]=((char)(value>>16)&0xFF);
   pos++;
          int spr_intScratch7;spr_intScratch7=pos;chck_accs_p0(bildPuffer,spr_intScratch7,9)
   bildPuffer._theObject->_array[spr_intScratch7]=((char)(value>>24)&0xFF);
   pos++;
   
   
} //End Of Method

void BMP_Erzeuger_SW::zeichne(char* stackStartPtr,int x,int y,int FarbNr){
   char SPR_stack_dummy_var;
   int stelle;stelle=(y*zeilenLaenge*8)+x;
   int stelleOktet;stelleOktet=(stelle/8)+54+(2*4);
   int stelleBit;stelleBit=7-(stelle%8);
   int maske;maske=1<<stelleBit;
   if(FarbNr!=1){
      maske=255^maske;
             int spr_intScratch9;spr_intScratch9=stelleOktet;chck_accs_p0(bildPuffer,spr_intScratch9,11)
             int spr_intScratchb;spr_intScratchb=stelleOktet;chck_accs_p0(bildPuffer,spr_intScratchb,13)
      bildPuffer._theObject->_array[spr_intScratch9]=((char)((int)bildPuffer._theObject->_array[spr_intScratchb])&maske);
      
   }
   else
   {
          int spr_intScratchd;spr_intScratchd=stelleOktet;chck_accs_p0(bildPuffer,spr_intScratchd,15)
             int spr_intScratchf;spr_intScratchf=stelleOktet;chck_accs_p0(bildPuffer,spr_intScratchf,17)
      bildPuffer._theObject->_array[spr_intScratchd]=((char)((int)bildPuffer._theObject->_array[spr_intScratchf])|maske);
      }
   
   
} //End Of Method

int BMP_Erzeuger_SW::pufferGroesse(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int bitmap_groesse;bitmap_groesse=(zeilenLaenge*_hoehe);
   int farbTabelleGroesse;farbTabelleGroesse=2*4;
   int file_size;file_size=54+farbTabelleGroesse+bitmap_groesse;
   return file_size;
   
   
} //End Of Method

void BMP_Erzeuger_SW::erzeugeAnfang(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   int pixel_width;pixel_width=_breite;
   int pixel_height;pixel_height=_hoehe;
   int bitmap_groesse;bitmap_groesse=(pixel_width*pixel_height)/8;
   int farbTabelleGroesse;farbTabelleGroesse=2*4;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int file_size;file_size=this->pufferGroesse(stackStartPtr);
   int size_raw_pixel;size_raw_pixel=bitmap_groesse;
          int spr_intScratch11;spr_intScratch11=i;chck_accs_p0(bildPuffer,spr_intScratch11,19)
   bildPuffer._theObject->_array[spr_intScratch11]='B';
   i++;
          int spr_intScratch13;spr_intScratch13=i;chck_accs_p0(bildPuffer,spr_intScratch13,21)
   bildPuffer._theObject->_array[spr_intScratch13]='M';
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,file_size);
   if(i!=6){
      SPRStackArrayConcrete<char,25> spr_StringScratch15;strcpy(spr_StringScratch15._array,"assert 1 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch15).pr(stackStartPtr);
      
   }
          int spr_intScratch16;spr_intScratch16=i;chck_accs_p0(bildPuffer,spr_intScratch16,24)
   bildPuffer._theObject->_array[spr_intScratch16]=((char)0);
   i++;
          int spr_intScratch18;spr_intScratch18=i;chck_accs_p0(bildPuffer,spr_intScratch18,26)
   bildPuffer._theObject->_array[spr_intScratch18]=((char)0);
   i++;
          int spr_intScratch1a;spr_intScratch1a=i;chck_accs_p0(bildPuffer,spr_intScratch1a,28)
   bildPuffer._theObject->_array[spr_intScratch1a]=((char)0);
   i++;
          int spr_intScratch1c;spr_intScratch1c=i;chck_accs_p0(bildPuffer,spr_intScratch1c,30)
   bildPuffer._theObject->_array[spr_intScratch1c]=((char)0);
   i++;
          int spr_intScratch1e;spr_intScratch1e=i;chck_accs_p0(bildPuffer,spr_intScratch1e,32)
   bildPuffer._theObject->_array[spr_intScratch1e]=((char)54+farbTabelleGroesse);
   i++;
          int spr_intScratch20;spr_intScratch20=i;chck_accs_p0(bildPuffer,spr_intScratch20,34)
   bildPuffer._theObject->_array[spr_intScratch20]=((char)0);
   i++;
          int spr_intScratch22;spr_intScratch22=i;chck_accs_p0(bildPuffer,spr_intScratch22,36)
   bildPuffer._theObject->_array[spr_intScratch22]=((char)0);
   i++;
          int spr_intScratch24;spr_intScratch24=i;chck_accs_p0(bildPuffer,spr_intScratch24,38)
   bildPuffer._theObject->_array[spr_intScratch24]=((char)0);
   i++;
   if(i!=14){
      SPRStackArrayConcrete<char,25> spr_StringScratch26;strcpy(spr_StringScratch26._array,"assert 2 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch26).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,40);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,pixel_width);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,pixel_height);
   if(i!=26){
      SPRStackArrayConcrete<char,25> spr_StringScratch27;strcpy(spr_StringScratch27._array,"assert 3 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch27).pr(stackStartPtr);
      
   }
          int spr_intScratch28;spr_intScratch28=i;chck_accs_p0(bildPuffer,spr_intScratch28,42)
   bildPuffer._theObject->_array[spr_intScratch28]=((char)1);
   i++;
          int spr_intScratch2a;spr_intScratch2a=i;chck_accs_p0(bildPuffer,spr_intScratch2a,44)
   bildPuffer._theObject->_array[spr_intScratch2a]=((char)0);
   i++;
          int spr_intScratch2c;spr_intScratch2c=i;chck_accs_p0(bildPuffer,spr_intScratch2c,46)
   bildPuffer._theObject->_array[spr_intScratch2c]=((char)1);
   i++;
          int spr_intScratch2e;spr_intScratch2e=i;chck_accs_p0(bildPuffer,spr_intScratch2e,48)
   bildPuffer._theObject->_array[spr_intScratch2e]=((char)0);
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,0);
   if(i!=34){
      SPRStackArrayConcrete<char,25> spr_StringScratch30;strcpy(spr_StringScratch30._array,"assert 4 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch30).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,size_raw_pixel);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,0);
   if(i!=46){
      SPRStackArrayConcrete<char,25> spr_StringScratch31;strcpy(spr_StringScratch31._array,"assert 5 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch31).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,2);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,2);
   if(i!=54){
      SPRStackArrayConcrete<char,25> spr_StringScratch32;strcpy(spr_StringScratch32._array,"assert 6 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch32).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,farbe1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,farbe2);
   {//begin of SPR for statement
   i=54+farbTabelleGroesse;
   while(i<bildPuffer._theObject->_sz){
             int spr_intScratch33;spr_intScratch33=i;chck_accs_p0(bildPuffer,spr_intScratch33,53)
      bildPuffer._theObject->_array[spr_intScratch33]=((char)0);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void BMP_Erzeuger_SW::erzeugeSinus(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->erzeugeAnfang(stackStartPtr);
   int pixel_width;pixel_width=_breite;
   int pixel_height;pixel_height=_hoehe;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int file_size;file_size=this->pufferGroesse(stackStartPtr);
   int x;
   {//begin of SPR for statement
   x=0;
   while(x<pixel_width){
      int y;
      
                  y = (_hoehe/2)+sin(float(x)/pixel_width*2.0f*3.1415f)*(_hoehe/4);
              
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->zeichne(stackStartPtr,x,y,1);
      x++;
      
   
   }
   }//end of SPR for statement
   SPRStackArrayConcrete<char,11> spr_StringScratch35;strcpy(spr_StringScratch35._array,"sinus.bmp");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile file(stackStartPtr,spr_StringScratch35,0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   file.write(stackStartPtr,0,file_size,bildPuffer);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   file.close(stackStartPtr);
   
   
} //End Of Method

int BMP_Erzeuger_SW::schreibe(char* stackStartPtr,SPRFile& ausgabe){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return ausgabe.schreibeAlles(stackStartPtr,bildPuffer,0,0,bildPuffer._theObject->_sz);
   
   
} //End Of Method

