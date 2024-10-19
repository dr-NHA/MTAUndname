#include "undname.h"

extern char* WinMain(const char* hInstance,const char* Decorated){
#if DEBUG
if(Decorated==NULL)
Decorated="?GiveMoney@drNHA@@AAEXH@Z";// Input decorated name
int Length=0x256;//Maximum length of user buffer
unsigned short Flags=UNDNAME_HAVE_PARAMETERS;// Feature disable flags
char* ret=UndecorateSymbolName(Decorated,Flags);
Decorated="?GetName@PushButton@UILibrary@@UAEPB_WPAPAVStringHolder@2@@Z";char* ret2=UndecorateSymbolName(Decorated,Flags);
Decorated="??$CallbackBase1P@_NABVVector3@cdc@@@@";char* ret3=UndecorateSymbolName(Decorated,Flags);
return ret;
#endif
return NULL;
}

