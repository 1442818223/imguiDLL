#include "pch.h"

//¿ªÊ¼hook
void Helpers::HookFunction(PVOID* oFunction, PVOID Function)
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(oFunction,Function);
	DetourTransactionCommit();

}

//½áÊøhook
void Helpers::UnHookFunction(PVOID* oFunction, PVOID Function)
{

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(oFunction, Function);
	DetourTransactionCommit();


}

