class ThreadLocalStorageEntry;
#include "c:/tmp/ttt/Sappeur_4.11\cppMapping\mapping.h"
class SAPPEUR_DLL_EXPORT_A String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,16> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_16();
String_16(char* stackStartPtr,SPRStackArray<char>& init);
String_16(char* stackStartPtr,String_16& other);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_16& other);
void append(char* stackStartPtr,SPRSmartPtr<String_16> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_16& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_16> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_16& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_16> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_16& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_16& escaped,char escape);
void deEscape(char* stackStartPtr,String_16& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_16& str2);
void rightOf(char* stackStartPtr,char divider,String_16& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_16& oStr,int start,int end);
~String_16();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
longlong hashCodeLL(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_16& alt,String_16& neu,String_16& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_16> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_16& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_16& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,128> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_128();
String_128(char* stackStartPtr,SPRStackArray<char>& init);
String_128(char* stackStartPtr,String_128& other);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_128& other);
void append(char* stackStartPtr,SPRSmartPtr<String_128> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_128& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_128> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_128& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_128> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_128& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_128& escaped,char escape);
void deEscape(char* stackStartPtr,String_128& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_128& str2);
void rightOf(char* stackStartPtr,char divider,String_128& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_128& oStr,int start,int end);
~String_128();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
longlong hashCodeLL(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_128& alt,String_128& neu,String_128& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_128> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_128& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_128& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadInfo: public SPRMTObject {
public:
longlong _threadID;
ThreadInfo();
longlong getThreadID(char* stackStartPtr);
void join(char* stackStartPtr);
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class PrintfClass: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _fstr;
String_128 _outBuf;
int _fstrIdx;
SPRSmartPtr<SPRArray<char> > bufferDyn;
PrintfClass& fstr(char* stackStartPtr,SPRStackArray<char>& str);
PrintfClass& sa(char* stackStartPtr,SPRStackArray<char>& str);
PrintfClass& sa(char* stackStartPtr,int num);
PrintfClass& sa(char* stackStartPtr,int num,int base,int numChars);
PrintfClass& sa(char* stackStartPtr,longlong num);
PrintfClass& saHex(char* stackStartPtr,char oktet);
PrintfClass& saHex(char* stackStartPtr,longlong number);
PrintfClass& saHex(char* stackStartPtr,int number);
PrintfClass& sa(char* stackStartPtr,double num);
PrintfClass& sa(char* stackStartPtr,float num);
PrintfClass& sa(char* stackStartPtr,String_16& str);
PrintfClass& sa(char* stackStartPtr,SPRSmartPtr<String_16> str);
PrintfClass& sa(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > str);
PrintfClass& sa(char* stackStartPtr,char c);
PrintfClass& saExp(char* stackStartPtr,double num);
void pr(char* stackStartPtr);
void pr(char* stackStartPtr,SPRStackArray<char>& text);
void prNoLF(char* stackStartPtr);
void prHex(char* stackStartPtr,char x);
PrintfClass();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Umgebung: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void leseVariable(char* stackStartPtr,String_16& varName,int& erfolg,String_16& wert);
int leseVariable(char* stackStartPtr,SPRStackArray<char>& varName,String_16& wertStr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

enum SPRFile_Mode{SF_Readonly,SF_ReadWrite,SF_ReadWriteTruncated};
class SPRFile: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int _handle;
SPRSmartPtr<SPRArray<char> > _readBuffer;
int _readPtr;
int _validBytes;
int _fpos;
SPRFile(char* stackStartPtr,SPRStackArray<char>& path,int readonly);
SPRFile(char* stackStartPtr,String_16& pfad,int readonly);
SPRFile();
int oeffne(char* stackStartPtr,String_16& dateiName,SPRFile_Mode modus);
int oeffne(char* stackStartPtr,SPRStackArray<char>& path,int readonly,int neueLoeschen);
int systemHandle(char* stackStartPtr);
int read(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer);
int read(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer);
int write(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer);
int write(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer);
int write64(char* stackStartPtr,longlong pos,int count,SPRStackArray<char>& buffer);
int schreibeAlles(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buffer,int stelleEingabe,int stelleAusgabe,int anzahl);
int size(char* stackStartPtr);
void close(char* stackStartPtr);
int readLine(char* stackStartPtr,String_16& oLine);
int readChar(char* stackStartPtr,char& out);
~SPRFile();
static void UnitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Logfile: public SPRFile {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int writePos;
SPRSmartPtr<SPRArray<char> > buffer;
Logfile(char* stackStartPtr,String_16& filename);
int append(char* stackStartPtr,String_16& traceMessage);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorageList: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}

      char* _stackStartPtr;
   
int _entryCount;
SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 > _entries;
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorageEntry: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int _id;
int _dummy;
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorage: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 > _entries;
static void getEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry>& ret);
static void setEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry> entry);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemTime: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
longlong getMillisecondCounter(char* stackStartPtr);
void getDateTimeString(char* stackStartPtr,String_16& dateTimeStringNOW);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class CommandlineArgs: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int numberOfArguments(char* stackStartPtr);
void getArgument(char* stackStartPtr,int idx,String_16& arg);
void getArgument(char* stackStartPtr,int idx,int& arg);
void getArgument(char* stackStartPtr,int idx,double& arg);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemConstants: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SystemConstants();
char getFileSeparator(char* stackStartPtr);
int isWindows(char* stackStartPtr);
int isUnix(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemControl: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SystemControl();
void exit(char* stackStartPtr);
void uSleep(char* stackStartPtr,int microSeconds);
static void exitError(char* stackStartPtr,SPRStackArray<char>& message);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class HexPrinter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void intToHex(char* stackStartPtr,int x,SPRStackArray<char>& out,int startIndex);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class KeyType4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _vornameNamename;
KeyType4(char* stackStartPtr,String_16& vornameNachname);
KeyType4(char* stackStartPtr,SPRStackArray<char>& vornameNachname);
int compare(char* stackStartPtr,KeyType4& other);
int getHashCode(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hashable4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _Vorname;
String_16 _Nachname;
String_16 _Strasse;
String_16 _Ort;
Hashable4(char* stackStartPtr,SPRStackArray<char>& vorname,SPRStackArray<char>& nachname,SPRStackArray<char>& strasse,SPRStackArray<char>& ort);
void getKey(char* stackStartPtr,SPRSmartPtr<KeyType4>& oKey);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hashtable4_Hashable4_KeyType4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > _elements;
int _numUsed;
int _readPtr;
int _size;
void insertInternally(char* stackStartPtr,SPRSmartPtr<Hashable4> x);
Hashtable4_Hashable4_KeyType4(char* stackStartPtr,int initialCapacity);
void insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x);
void get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue);
int numElements(char* stackStartPtr);
void getFirst(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue);
void getNext(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class test556661: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MTSuperClass: public SPRMTObject {
public:
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MultiThreadAdmin: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void turnOffLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject);
void turnOnLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MutexInfo: public SPRMTObject {
public:

    #ifdef WINDOWS_SPR
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      pthread_mutex_t* _pmutex;
    #endif
  
MutexInfo();
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Mutex: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<MutexInfo> _mi;
int _isOwner;

    #ifdef WINDOWS_SPR 
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      pthread_mutex_t* _pmutex;
    #endif

Mutex();
Mutex(char* stackStartPtr,SPRSmartPtr<MutexInfo> mi);
void lock(char* stackStartPtr);
void unlock(char* stackStartPtr);
MutexInfo* getMutexInfo(char* stackStartPtr);
~Mutex();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SemaphoreInfo: public SPRMTObject {
public:

    #ifdef WINDOWS_SPR
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      sem_t _sem_t;
    #endif
  
SemaphoreInfo();
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Semaphore: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SemaphoreInfo> _si;
int _isOwner;

    #ifdef WINDOWS_SPR 
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      sem_t* _sem_t;
    #endif

Semaphore();
Semaphore(char* stackStartPtr,SPRSmartPtr<SemaphoreInfo> si);
void P(char* stackStartPtr);
void V(char* stackStartPtr);
SemaphoreInfo* getSemaphoreInfo(char* stackStartPtr);
~Semaphore();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class NullPtrClassSappeurInternal: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Input: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void getString(char* stackStartPtr,String_16& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Benutzer_Umschalter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void schalteNach(char* stackStartPtr,int benutzer,int gruppe);
void UnitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Complex: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
double re;
double im;
Complex(char* stackStartPtr,double i_re,double i_im);
Complex(char* stackStartPtr,Complex& andere);
Complex();
void wz(char* stackStartPtr,Complex& andere);
void wz(char* stackStartPtr,double i_re,double i_im);
void mal(char* stackStartPtr,Complex& andere,Complex& ergebnis);
void mal(char* stackStartPtr,double andere,Complex& ergebnis);
void plus(char* stackStartPtr,Complex& andere,Complex& ergebnis);
void minus(char* stackStartPtr,Complex& andere,Complex& ergebnis);
double abs(char* stackStartPtr);
double norm(char* stackStartPtr);
void print(char* stackStartPtr,String_16& ausgabe);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Math: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int shlC(char* stackStartPtr,int x);
int shlC(char* stackStartPtr,int x,int n);
double sinus(char* stackStartPtr,double rad);
double asinus(char* stackStartPtr,double rad);
double cosinus(char* stackStartPtr,double rad);
double acosinus(char* stackStartPtr,double rad);
double tangens(char* stackStartPtr,double rad);
double atangens(char* stackStartPtr,double rad);
double aHochB(char* stackStartPtr,double a,double b);
double euler(char* stackStartPtr,double x);
double wurzel(char* stackStartPtr,double x);
double pi(char* stackStartPtr);
double e(char* stackStartPtr);
double log(char* stackStartPtr,double x);
int log2(char* stackStartPtr,int x);
int pruefeZwP(char* stackStartPtr,int n);
void polar(char* stackStartPtr,double rho,double theta,Complex& ausgabe);
void UnitTest(char* stackStartPtr);
void pow(char* stackStartPtr,Complex& x,int y,Complex& ergebnis);
double fabs(char* stackStartPtr,double x);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

