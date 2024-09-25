#pragma once
#include "Helpers.h"
#include"Im/detours.h" //必须找到detour里面的include文件拉进来
#include"Im/detver.h"

void Helpers::HookFunction(PVOID* oFunction, PVOID Function)
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(oFunction, Function);
	DetourTransactionCommit();

}

void Helpers::UnHookFunction(PVOID* oFunction, PVOID Function)
{

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(oFunction, Function);
	DetourTransactionCommit();


}