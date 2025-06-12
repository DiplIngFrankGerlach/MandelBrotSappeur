#include "stdafx.h"
#include "header_Math.ai.h"

int Math::shlC(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   int i;
   
        int save=x&0x80000000;     
        x=x<<1;
        if(save != 0) x=x|1;
      
   return x;
   
   
} //End Of Method

int Math::shlC(char* stackStartPtr,int x,int n){
   char SPR_stack_dummy_var;
   int i;
   
        int linkeBits;
        linkeBits=x>>(32-n);
        x=x<<n;
        x=x|linkeBits;
      
   return x;
   
   
} //End Of Method

double Math::sinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = sin(rad);
      
   return y;
   
   
} //End Of Method

double Math::asinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = asin(rad);
      
   return y;
   
   
} //End Of Method

double Math::cosinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = cos(rad);
      
   return y;
   
   
} //End Of Method

double Math::acosinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = acos(rad);
      
   return y;
   
   
} //End Of Method

double Math::tangens(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = tan(rad);
      
   return y;
   
   
} //End Of Method

double Math::atangens(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = atan(rad);
      
   return y;
   
   
} //End Of Method

double Math::aHochB(char* stackStartPtr,double a,double b){
   char SPR_stack_dummy_var;
   double y;
   
          y = ::pow(a,b);
      
   return y;
   
   
} //End Of Method

double Math::euler(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double y;
   
          y = exp(x);
      
   return y;
   
   
} //End Of Method

double Math::pi(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 3.14159265358979323846264338327950288;
   
   
} //End Of Method

double Math::e(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 2.71828182845904523536028747135266249;
   
   
} //End Of Method

void Math::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double y;y=this->sinus(stackStartPtr,45.0/360.0*2.0*3.1415);
   double unten;unten=0.7070;
   double oben;oben=0.7072;
   if((y<unten)||(y>oben)){
      SPRStackArrayConcrete<char,27> spr_StringScratch0;strcpy(spr_StringScratch0._array,"Math::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch0).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch1;strcpy(spr_StringScratch1._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch1).sa(stackStartPtr,y).pr(stackStartPtr);
   y=y*1000000000.0;
   y=y*1000000000.0;
   y=y*1000000000.0;
   y=y*1000000000.0;
   SPRStackArrayConcrete<char,3> spr_StringScratch2;strcpy(spr_StringScratch2._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch2).sa(stackStartPtr,y).pr(stackStartPtr);
   SPRStackArrayConcrete<char,3> spr_StringScratch3;strcpy(spr_StringScratch3._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch3).saExp(stackStartPtr,y).pr(stackStartPtr);
   SPRStackArrayConcrete<char,3> spr_StringScratch4;strcpy(spr_StringScratch4._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch4).sa(stackStartPtr,this->e(stackStartPtr)).pr(stackStartPtr);
   SPRStackArrayConcrete<char,30> spr_StringScratch5;strcpy(spr_StringScratch5._array,"Math::UnitTest() erfolgreich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch5).pr(stackStartPtr);
   
   
} //End Of Method

int Math::log2(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   int i;i=0;
   while(x!=0){
      x=x>>1;
      i++;
      
   };
   return i-1;
   
   
} //End Of Method

int Math::pruefeZwP(char* stackStartPtr,int n){
   char SPR_stack_dummy_var;
   int verundet;verundet=n&(n-1);
   if((n>0)&&(verundet==0)){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Math::polar(char* stackStartPtr,double rho,double theta,Complex& ausgabe){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.re=rho*this->cosinus(stackStartPtr,theta);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.im=rho*this->sinus(stackStartPtr,theta);
   
   
} //End Of Method

double Math::log(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double result;
    result = ::std::log(x);
   return result;
   
   
} //End Of Method

void Complex::wz(char* stackStartPtr,Complex& andere){
   char SPR_stack_dummy_var;
   re=andere.re;
   im=andere.im;
   
   
} //End Of Method

void Complex::wz(char* stackStartPtr,double i_re,double i_im){
   char SPR_stack_dummy_var;
   re=i_re;
   im=i_im;
   
   
} //End Of Method

Complex::Complex(char* stackStartPtr,Complex& andere){
   char SPR_stack_dummy_var;
   re=andere.re;
   im=andere.im;
   
   
} //End Of Method

Complex::Complex(){
   char* stackStartPtr=gebeStackStartPointer();char SPR_stack_dummy_var;
   re=0.0;
   im=0.0;
   
   
} //End Of Method

void Complex::mal(char* stackStartPtr,Complex& andere,Complex& ergebnis){
   char SPR_stack_dummy_var;
   ergebnis.re=(re*andere.re)-(im*andere.im);
   ergebnis.im=(re*andere.im)+(im*andere.re);
   
   
} //End Of Method

void Complex::mal(char* stackStartPtr,double andere,Complex& ergebnis){
   char SPR_stack_dummy_var;
   ergebnis.re=re*andere;
   ergebnis.im=im*andere;
   
   
} //End Of Method

void Complex::plus(char* stackStartPtr,Complex& andere,Complex& ergebnis){
   char SPR_stack_dummy_var;
   ergebnis.re=re+andere.re;
   ergebnis.im=im+andere.im;
   
   
} //End Of Method

void Complex::minus(char* stackStartPtr,Complex& andere,Complex& ergebnis){
   char SPR_stack_dummy_var;
   ergebnis.re=re-andere.re;
   ergebnis.im=im-andere.im;
   
   
} //End Of Method

void Complex::print(char* stackStartPtr,String_16& ausgabe){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.append(stackStartPtr,re);
   SPRStackArrayConcrete<char,3> spr_StringScratch6;strcpy(spr_StringScratch6._array," ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.append(stackStartPtr,spr_StringScratch6);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.append(stackStartPtr,im);
   SPRStackArrayConcrete<char,3> spr_StringScratch7;strcpy(spr_StringScratch7._array,"i");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.append(stackStartPtr,spr_StringScratch7);
   
   
} //End Of Method

Complex::Complex(char* stackStartPtr,double i_re,double i_im){
   char SPR_stack_dummy_var;
   re=i_re;
   im=i_im;
   
   
} //End Of Method

double Complex::abs(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double result;
    result = ::std::sqrt( (re*re) + (im*im) ); 
   return result;
   
   
} //End Of Method

double Complex::norm(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return (re*re)+(im*im);
   
   
} //End Of Method

void Math::pow(char* stackStartPtr,Complex& x,int y,Complex& ergebnis){
   char SPR_stack_dummy_var;
   
        complex<double> cppX(x.re,x.im);
        complex<double> cppErgebnis = std::pow(cppX,double(y));
        ergebnis.re = cppErgebnis.real();
        ergebnis.im = cppErgebnis.imag();
      
   
   
} //End Of Method

double Math::fabs(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double n;n=0.0;
   if(x<n){
      return x*-1.0;
      
   }
   return x;
   
   
} //End Of Method

double Math::wurzel(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double ret;
    ret = ::sqrt(x); 
   return ret;
   
   
} //End Of Method

