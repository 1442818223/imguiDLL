#include "pch.h"

bool mainBeginsate = TRUE;

bool tab_bar_flags = TRUE;
bool 复选框 = TRUE;


void 选项一() {
	if (ImGui::BeginTabBar("tab1", tab_bar_flags))
	{
	
		//中间写代码


	ImGui:: EndTabItem(); //要结束
	}


}


void LoadMyWin()
{
	//界面开始绘制(固定)
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	//窗口大小
	ImGui::SetNextWindowPos(ImVec2(50, 50), ImGuiCond_FirstUseEver);
	ImGui::SetNextWindowSize(ImVec2(350, 450));

	ImGui::Begin(u8"测试辅助窗口", &mainBeginsate);

	//创建一个标签栏（Tab Bar），其中标签栏的标签为"tab1"，同时还可以使用tab_bar_flags指定一些标签栏的属性
	if (ImGui::BeginTabBar("tab1", tab_bar_flags))
	{
		ImGui::Text(u8"欢迎使用IMGUI窗口");
		ImGui::SameLine();  //上下两句写在一行
		ImGui::Text(u8"欢迎使用IMGUI窗口2");
		ImGui::Text(u8"欢迎使用IMGUI窗口3");

		ImGui::Checkbox(u8"开启飞天", &复选框);

		ImGui::Button(u8"游戏初始化");//按钮

		选项一();
		//	选项二();
		//	选项三();
		//	选项四();
		//	选项五();
	}
    ImGui:: EndTabBar(); //要结束


	ImGui::End();


	//(固定)
	ImGui::EndFrame();

	ImGui::Render();//绘制
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());




}
