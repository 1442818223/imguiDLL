#include "ph.h"
#include "dllmain.h"
// ȫ�ֱ���
bool mainBeginsate = TRUE;
ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_None;  // ʹ�� ImGuiTabBarFlags ���ͣ������ǲ���ֵ
bool ��ѡ�� = TRUE;  // ����ֵ��ѡ�����

// ѡ��һ��������
void ѡ��һ() {
	// ����һ����ǩҳ�Tab Item��
	if (ImGui::BeginTabItem("Tab ѡ��һ"))  // ʹ�� ImGui::BeginTabItem ���� ImGui::BeginTabBar
	{
		// ������д�������ݣ��������ֻ��߰�ť
		ImGui::Text(u8"����ѡ��һ������");

		// ���� Tab Item
		ImGui::EndTabItem();  // ������� Tab Item
	}
}

// �����ڼ��غ���
void LoadMyWin() {
	// IMGUI ��ܵĹ̶���ʼ������
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	// ���ô���λ�úʹ�С
	ImGui::SetNextWindowPos(ImVec2(50, 50), ImGuiCond_FirstUseEver);
	ImGui::SetNextWindowSize(ImVec2(350, 450));

	// ����һ������
	ImGui::Begin(u8"���Ը�������", &mainBeginsate);//������ָʾ�����Ƿ�Ӧ������ʾ

	// ����һ����ǩ����Tab Bar������ǩ���ı�ǩΪ"tab1"����ָ�� tab_bar_flags
	if (ImGui::BeginTabBar("tab1", tab_bar_flags))
	{
		// ��ʾһЩ�ı�����
		ImGui::Text(u8"��ӭʹ��IMGUI����");
		ImGui::SameLine();  // ͬһ����ʾ
		ImGui::Text(u8"��ӭʹ��IMGUI����2");
		ImGui::Text(u8"��ӭʹ��IMGUI����3");

		// ����һ����ѡ��
		ImGui::Checkbox(u8"��������", &��ѡ��);

		// ����һ����ť
		if (ImGui::Button(u8"��ȫж��")) {
			// ��ť�����ִ�еĲ���
			// ����������д�߼��������ʼ����Ϸ��

			unLoad();
		}

		// ����ѡ��һ����
		//ѡ��һ();

		// ����ѡ����Ը�����Ҫ��ӣ�
		// ѡ���();
		// ѡ����();
		// ѡ����();
		// ѡ����();

		// ���� Tab Bar
		ImGui::EndTabBar();  // ������� Tab Bar
	}

	// ��������
	ImGui::End();

	// IMGUI ��ܵĹ̶���������
	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
}