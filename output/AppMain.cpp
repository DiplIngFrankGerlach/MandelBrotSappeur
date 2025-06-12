#include "stdafx.h"
#include "header_AppMain.ai.h"

void Main::hsvToRgb(char* stackStartPtr,double h,double s,double v,int& r,int& g,int& b){
   char SPR_stack_dummy_var;
   double c;c=v*s;
   double x;
    x= c * (1 - std::fabs(std::fmod(h / 60.0, 2) - 1)); 
   double m;m=v-c;
   double r1;
   double g1;
   double b1;
   if(h<60.0){
      r1=c;
      g1=x;
      b1=0.0;
      
   }
   else
   {
   if(h<120.0){
         r1=x;
         g1=c;
         b1=0.0;
         
      }
      else
      {
      if(h<180.0){
            r1=0.0;
            g1=c;
            b1=x;
            
         }
         else
         {
         if(h<240.0){
               r1=0.0;
               g1=x;
               b1=c;
               
            }
            else
            {
            if(h<300.0){
                  r1=x;
                  g1=0.0;
                  b1=c;
                  
               }
               else
               {
               r1=c;
                  g1=0.0;
                  b1=x;
                  }
               }
            }
         }
      }
   r=((int)((r1+m)*255));
   r=r&0xFF;
   g=((int)((g1+m)*255));
   g=g&0xFF;
   b=((int)((b1+m)*255));
   b=b&0xFF;
   
   
} //End Of Method

double Main::mandelbrotSmooth(char* stackStartPtr,Complex& c){
   char SPR_stack_dummy_var;
   Math m;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   Complex z(stackStartPtr,0.0,0.0);
   int iter;iter=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((z.abs(stackStartPtr)<=2.0)&&(iter<MAX_ITER)){
      Complex produkt;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      z.mal(stackStartPtr,z,produkt);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      produkt.plus(stackStartPtr,c,z);
      iter++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if(iter>=MAX_ITER){
      return ((double)MAX_ITER);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double log_zn;log_zn=m.log(stackStartPtr,z.norm(stackStartPtr))/2.0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double nu;nu=m.log(stackStartPtr,log_zn/m.log(stackStartPtr,2.0))/m.log(stackStartPtr,2.0);
   return iter+1-nu;
   
   
} //End Of Method

void Main::pixelToComplex(char* stackStartPtr,int x,int y,Complex& result){
   char SPR_stack_dummy_var;
   double real;real=(((double)x)/((double)WIDTH)*(xMax-xMin))+xMin;
   double imag;imag=(((double)y)/((double)HEIGHT)*(yMax-yMin))+yMin;
   result.re=real;
   result.im=imag;
   
   
} //End Of Method

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var;
   CommandlineArgs cla;
   PrintfClass pfc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(cla.numberOfArguments(stackStartPtr)!=8){
      SPRStackArrayConcrete<char,86> spr_StringScratch0;strcpy(spr_StringScratch0._array,"Benutzung: spr_fractal <MAX_ITERATIONS> <WIDTH> <HEIGHT> <xMin> <xMax> <yMin> <yMax>");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch0).pr(stackStartPtr);
      SPRStackArrayConcrete<char,54> spr_StringScratch1;strcpy(spr_StringScratch1._array,"Beispiel: spr_fractal 1000 500 500 -1.0 1.0 -1.0 1.0");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1).pr(stackStartPtr);
      return -1;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   cla.getArgument(stackStartPtr,1,MAX_ITER);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   cla.getArgument(stackStartPtr,2,WIDTH);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   cla.getArgument(stackStartPtr,3,HEIGHT);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   cla.getArgument(stackStartPtr,4,xMin);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   cla.getArgument(stackStartPtr,5,xMax);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   cla.getArgument(stackStartPtr,6,yMin);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   cla.getArgument(stackStartPtr,7,yMax);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   BMP_Erzeuger bmpe(stackStartPtr,WIDTH,HEIGHT);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bmpe.erzeugeAnfang(stackStartPtr);
   {//begin of SPR for statement
   int y;y=HEIGHT-1;
   while(y>=0){
      {//begin of SPR for statement
      int x;x=0;
      while(x<WIDTH){
         Complex c;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->pixelToComplex(stackStartPtr,x,y,c);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         double iter;iter=this->mandelbrotSmooth(stackStartPtr,c);
         int r;
         int g;
         int b;
         double MAX_ITER_DOUBLE;MAX_ITER_DOUBLE=((double)MAX_ITER);
         if(iter>=MAX_ITER_DOUBLE){
            r=0;
            g=0;
            b=0;
            
         }
         else
         {
         double hue;hue=(360.0*iter)/MAX_ITER;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->hsvToRgb(stackStartPtr,hue,1.0,1.0,r,g,b);
            }
         int bgr;
         bgr=b;
         bgr=bgr<<8;
         bgr=bgr|g;
         bgr=bgr<<8;
         bgr=bgr|r;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bmpe.zeichne(stackStartPtr,x,y,bgr);
         x++;
         
      
      }
      }//end of SPR for statement
      y=y-1;
      
   
   }
   }//end of SPR for statement
   SPRStackArrayConcrete<char,13> spr_StringScratch2;strcpy(spr_StringScratch2._array,"fractal.bmp");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile f(stackStartPtr,spr_StringScratch2,0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.systemHandle(stackStartPtr)>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      bmpe.schreibe(stackStartPtr,f);
      
   }
   else
   {
   SPRStackArrayConcrete<char,42> spr_StringScratch3;strcpy(spr_StringScratch3._array,"konnte Datei nicht zum Schreiben oeffnen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch3).pr(stackStartPtr);
      return -1;
      }
   return 1;
   
   
} //End Of Method

