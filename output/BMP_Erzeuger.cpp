#include "stdafx.h"
#include "header_BMP_Erzeuger.ai.h"

BMP_Erzeuger::BMP_Erzeuger(char* stackStartPtr,int groesseX,int groesseY){
   char SPR_stack_dummy_var;
   _breite=groesseX;
   _hoehe=groesseY;
   _breiteZeileOktets=(((_breite*24)+31)/32)*4;
   SPRStackArrayConcrete<char,25> spr_StringScratch0;strcpy(spr_StringScratch0._array,"breite Speicherzeile: $");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch0).sa(stackStartPtr,_breiteZeileOktets).pr(stackStartPtr);
   int spr_intScratch1;
   spr_intScratch1=(_breiteZeileOktets*groesseY*3)+54;
   if(spr_intScratch1<0)throw "invalid size requested for heap allocation";
   bildPuffer=new(spr_intScratch1) SPRArray<char>(spr_intScratch1)
   ;
   
   
} //End Of Method

void BMP_Erzeuger::writeUI32(char* stackStartPtr,int& pos,int value){
   char SPR_stack_dummy_var;
          int spr_intScratch2;spr_intScratch2=pos;chck_accs_p0(bildPuffer,spr_intScratch2,4)
   bildPuffer._theObject->_array[spr_intScratch2]=((char)value&0xFF);
   pos++;
          int spr_intScratch4;spr_intScratch4=pos;chck_accs_p0(bildPuffer,spr_intScratch4,6)
   bildPuffer._theObject->_array[spr_intScratch4]=((char)(value>>8)&0xFF);
   pos++;
          int spr_intScratch6;spr_intScratch6=pos;chck_accs_p0(bildPuffer,spr_intScratch6,8)
   bildPuffer._theObject->_array[spr_intScratch6]=((char)(value>>16)&0xFF);
   pos++;
          int spr_intScratch8;spr_intScratch8=pos;chck_accs_p0(bildPuffer,spr_intScratch8,10)
   bildPuffer._theObject->_array[spr_intScratch8]=((char)(value>>24)&0xFF);
   pos++;
   
   
} //End Of Method

void BMP_Erzeuger::zeichne(char* stackStartPtr,int x,int y,int color_bgr){
   char SPR_stack_dummy_var;
   int index;index=(y*_breiteZeileOktets)+(x*3);
          int spr_intScratcha;spr_intScratcha=index+54;chck_accs_p0(bildPuffer,spr_intScratcha,12)
   bildPuffer._theObject->_array[spr_intScratcha]=((char)(color_bgr>>16)&0xFF);
          int spr_intScratchc;spr_intScratchc=index+54+1;chck_accs_p0(bildPuffer,spr_intScratchc,14)
   bildPuffer._theObject->_array[spr_intScratchc]=((char)(color_bgr>>8)&0xFF);
          int spr_intScratche;spr_intScratche=index+54+2;chck_accs_p0(bildPuffer,spr_intScratche,16)
   bildPuffer._theObject->_array[spr_intScratche]=((char)color_bgr&0xFF);
   
   
} //End Of Method

void BMP_Erzeuger::erzeugeAnfang(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   int pixel_width;pixel_width=_breite;
   int pixel_height;pixel_height=_hoehe;
   int file_size;file_size=54+(_breiteZeileOktets*pixel_height);
          int spr_intScratch10;spr_intScratch10=i;chck_accs_p0(bildPuffer,spr_intScratch10,18)
   bildPuffer._theObject->_array[spr_intScratch10]='B';
   i++;
          int spr_intScratch12;spr_intScratch12=i;chck_accs_p0(bildPuffer,spr_intScratch12,20)
   bildPuffer._theObject->_array[spr_intScratch12]='M';
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,file_size);
   if(i!=6){
      SPRStackArrayConcrete<char,25> spr_StringScratch14;strcpy(spr_StringScratch14._array,"assert 1 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch14).pr(stackStartPtr);
      
   }
          int spr_intScratch15;spr_intScratch15=i;chck_accs_p0(bildPuffer,spr_intScratch15,23)
   bildPuffer._theObject->_array[spr_intScratch15]=((char)0);
   i++;
          int spr_intScratch17;spr_intScratch17=i;chck_accs_p0(bildPuffer,spr_intScratch17,25)
   bildPuffer._theObject->_array[spr_intScratch17]=((char)0);
   i++;
          int spr_intScratch19;spr_intScratch19=i;chck_accs_p0(bildPuffer,spr_intScratch19,27)
   bildPuffer._theObject->_array[spr_intScratch19]=((char)0);
   i++;
          int spr_intScratch1b;spr_intScratch1b=i;chck_accs_p0(bildPuffer,spr_intScratch1b,29)
   bildPuffer._theObject->_array[spr_intScratch1b]=((char)0);
   i++;
          int spr_intScratch1d;spr_intScratch1d=i;chck_accs_p0(bildPuffer,spr_intScratch1d,31)
   bildPuffer._theObject->_array[spr_intScratch1d]=((char)54);
   i++;
          int spr_intScratch1f;spr_intScratch1f=i;chck_accs_p0(bildPuffer,spr_intScratch1f,33)
   bildPuffer._theObject->_array[spr_intScratch1f]=((char)0);
   i++;
          int spr_intScratch21;spr_intScratch21=i;chck_accs_p0(bildPuffer,spr_intScratch21,35)
   bildPuffer._theObject->_array[spr_intScratch21]=((char)0);
   i++;
          int spr_intScratch23;spr_intScratch23=i;chck_accs_p0(bildPuffer,spr_intScratch23,37)
   bildPuffer._theObject->_array[spr_intScratch23]=((char)0);
   i++;
   if(i!=14){
      SPRStackArrayConcrete<char,25> spr_StringScratch25;strcpy(spr_StringScratch25._array,"assert 2 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch25).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,40);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,pixel_width);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,pixel_height);
   if(i!=26){
      SPRStackArrayConcrete<char,25> spr_StringScratch26;strcpy(spr_StringScratch26._array,"assert 3 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch26).pr(stackStartPtr);
      
   }
          int spr_intScratch27;spr_intScratch27=i;chck_accs_p0(bildPuffer,spr_intScratch27,41)
   bildPuffer._theObject->_array[spr_intScratch27]=((char)1);
   i++;
          int spr_intScratch29;spr_intScratch29=i;chck_accs_p0(bildPuffer,spr_intScratch29,43)
   bildPuffer._theObject->_array[spr_intScratch29]=((char)0);
   i++;
          int spr_intScratch2b;spr_intScratch2b=i;chck_accs_p0(bildPuffer,spr_intScratch2b,45)
   bildPuffer._theObject->_array[spr_intScratch2b]=((char)24);
   i++;
          int spr_intScratch2d;spr_intScratch2d=i;chck_accs_p0(bildPuffer,spr_intScratch2d,47)
   bildPuffer._theObject->_array[spr_intScratch2d]=((char)0);
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,0);
   if(i!=34){
      SPRStackArrayConcrete<char,25> spr_StringScratch2f;strcpy(spr_StringScratch2f._array,"assert 4 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch2f).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,file_size-54);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,_breite);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,_hoehe);
   if(i!=46){
      SPRStackArrayConcrete<char,25> spr_StringScratch30;strcpy(spr_StringScratch30._array,"assert 5 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch30).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->writeUI32(stackStartPtr,i,0);
   if(i!=54){
      SPRStackArrayConcrete<char,25> spr_StringScratch31;strcpy(spr_StringScratch31._array,"assert 6 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch31).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   while(i<file_size){
             int spr_intScratch32;spr_intScratch32=i;chck_accs_p0(bildPuffer,spr_intScratch32,52)
      bildPuffer._theObject->_array[spr_intScratch32]=((char)0);
      i++;
      
   
   }
   }//end of SPR for statement
   if(i!=file_size){
      SPRStackArrayConcrete<char,25> spr_StringScratch34;strcpy(spr_StringScratch34._array,"assert 7 fehlgeschlagen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch34).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

void BMP_Erzeuger::erzeugeSinus(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->erzeugeAnfang(stackStartPtr);
   int pixel_width;pixel_width=_breite;
   int pixel_height;pixel_height=_hoehe;
   int file_size;file_size=54+(pixel_width*pixel_height*3);
   int i;
   {//begin of SPR for statement
   i=0;
   while(i<pixel_width){
      int x;x=i;
      int y;
      
                  y = (_hoehe/2)+sin(float(x)/pixel_width*2.0f*3.1415f)*(_hoehe/4);
              
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->zeichne(stackStartPtr,x,y,0xFFFFFF);
      i++;
      
   
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

void BMP_Erzeuger::erzeugeAusAbbildung(char* stackStartPtr,String_16& abbildung,SPRSmartPtr<SPRArray<char> >& bp,int& groessePuffer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->erzeugeAnfang(stackStartPtr);
   int pixel_width;pixel_width=_breite;
   int pixel_height;pixel_height=_hoehe;
   int file_size;file_size=54+(pixel_width*pixel_height*3);
   groessePuffer=file_size;
   int i;
   {//begin of SPR for statement
   i=0;
   while(i<pixel_width){
      double x;x=((double)i);
      x=x/((double)9);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      FunktionEinleser fe(stackStartPtr,abbildung);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      fe.setzeX(stackStartPtr,x);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      double y;y=(fe.werteAus(stackStartPtr,1)*((double)200))+(pixel_height/2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(fe.warFehlerhaft(stackStartPtr)==1){
         i=pixel_width;
         
      }
      double min;min=0;
      double max;max=999;
      if((y>min)&&(y<max)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->zeichne(stackStartPtr,i,y,0xFFFFFF);
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   bp=bildPuffer;
   
   
} //End Of Method

void BMP_Erzeuger::erzeugeAusAbbildung(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->erzeugeAnfang(stackStartPtr);
   int pixel_width;pixel_width=_breite;
   int pixel_height;pixel_height=_hoehe;
   int file_size;file_size=54+(pixel_width*pixel_height*3);
   int i;
   {//begin of SPR for statement
   i=0;
   while(i<pixel_width){
      double x;x=((double)i);
      x=x/((double)9);
      SPRStackArrayConcrete<char,41> spr_StringScratch36;strcpy(spr_StringScratch36._array,"(durch (mal (durch x 10) (sinus x)) 10)");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 abb(stackStartPtr,spr_StringScratch36);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      FunktionEinleser fe(stackStartPtr,abb);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      fe.setzeX(stackStartPtr,x);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      double y;y=(fe.werteAus(stackStartPtr,1)*((double)200))+(pixel_height/2);
      SPRStackArrayConcrete<char,5> spr_StringScratch37;strcpy(spr_StringScratch37._array,"$;$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch37).sa(stackStartPtr,x).sa(stackStartPtr,y).pr(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->zeichne(stackStartPtr,i,y,0xFFFFFF);
      i++;
      
   
   }
   }//end of SPR for statement
   SPRStackArrayConcrete<char,12> spr_StringScratch38;strcpy(spr_StringScratch38._array,"sinus2.bmp");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile file(stackStartPtr,spr_StringScratch38,0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   file.write(stackStartPtr,0,file_size,bildPuffer);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   file.close(stackStartPtr);
   
   
} //End Of Method

int BMP_Erzeuger::schreibe(char* stackStartPtr,SPRFile& ausgabe){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return ausgabe.write(stackStartPtr,0,bildPuffer._theObject->_sz,bildPuffer);
   
   
} //End Of Method

