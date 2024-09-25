#include "ph.h"
// 全局变量
bool mainBeginsate = TRUE;
ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_None;  // 使用 ImGuiTabBarFlags 类型，而不是布尔值
bool 复选框 = TRUE;  // 布尔值复选框控制

// 选项一函数定义
void 选项一() {
	// 创建一个标签页项（Tab Item）
	if (ImGui::BeginTabItem("Tab 选项一"))  // 使用 ImGui::BeginTabItem 而非 ImGui::BeginTabBar
	{
		// 在这里写具体内容，比如文字或者按钮
		ImGui::Text(u8"这是选项一的内容");

		// 结束 Tab Item
		ImGui::EndTabItem();  // 必须结束 Tab Item
	}
}

// 主窗口加载函数
void LoadMyWin() {
	// IMGUI 框架的固定初始化步骤
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	// 设置窗口位置和大小
	ImGui::SetNextWindowPos(ImVec2(50, 50), ImGuiCond_FirstUseEver);
	ImGui::SetNextWindowSize(ImVec2(350, 450));

	// 创建一个窗口
	ImGui::Begin(u8"测试辅助窗口", &mainBeginsate);

	// 创建一个标签栏（Tab Bar），标签栏的标签为"tab1"，并指定 tab_bar_flags
	if (ImGui::BeginTabBar("tab1", tab_bar_flags))
	{
		// 显示一些文本内容
		ImGui::Text(u8"欢迎使用IMGUI窗口");
		ImGui::SameLine();  // 同一行显示
		ImGui::Text(u8"欢迎使用IMGUI窗口2");
		ImGui::Text(u8"欢迎使用IMGUI窗口3");

		// 创建一个复选框
		ImGui::Checkbox(u8"开启飞天", &复选框);

		// 创建一个按钮
		if (ImGui::Button(u8"游戏初始化")) {
			// 按钮点击后执行的操作
			// 可以在这里写逻辑，比如初始化游戏等
		}

		// 调用选项一函数
		选项一();

		// 其他选项可以根据需要添加：
		// 选项二();
		// 选项三();
		// 选项四();
		// 选项五();

		// 结束 Tab Bar
		ImGui::EndTabBar();  // 必须结束 Tab Bar
	}

	// 结束窗口
	ImGui::End();

	// IMGUI 框架的固定结束步骤
	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
}