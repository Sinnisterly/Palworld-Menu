#include "../pch.h"
#include "../include/Menu.hpp"
#include "SDK.hpp"
#include "config.h"
#include <algorithm>

int InputTextCallback(ImGuiInputTextCallbackData* data) {
    char inputChar = data->EventChar;

    Config.Update(Config.inputTextBuffer);

    return 0;
}

namespace DX11_Base 
{
    // helper variables
    char inputBuffer_getFnAddr[100];
    char inputBuffer_getClass[100];
    char inputBuffer_setWaypoint[32];

    namespace Styles 
    {
        void InitStyle()
        {
            {
                ImGuiStyle& style = ImGui::GetStyle();

                style.Alpha = 0.9f;
                style.DisabledAlpha = 1.0f;
                style.WindowPadding = ImVec2(12.0f, 12.0f);
                style.WindowRounding = 11.5f;
                style.WindowBorderSize = 0.0f;
                style.WindowMinSize = ImVec2(20.0f, 20.0f);
                style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
                style.WindowMenuButtonPosition = ImGuiDir_Right;
                style.ChildRounding = 0.0f;
                style.ChildBorderSize = 1.0f;
                style.PopupRounding = 0.0f;
                style.PopupBorderSize = 1.0f;
                style.FramePadding = ImVec2(20.0f, 3.400000095367432f);
                style.FrameRounding = 11.89999961853027f;
                style.FrameBorderSize = 0.0f;
                style.ItemSpacing = ImVec2(4.300000190734863f, 5.5f);
                style.ItemInnerSpacing = ImVec2(7.099999904632568f, 1.799999952316284f);
                style.CellPadding = ImVec2(12.10000038146973f, 9.199999809265137f);
                style.IndentSpacing = 0.0f;
                style.ColumnsMinSpacing = 4.900000095367432f;
                style.ScrollbarSize = 11.60000038146973f;
                style.ScrollbarRounding = 15.89999961853027f;
                style.GrabMinSize = 3.700000047683716f;
                style.GrabRounding = 20.0f;
                style.TabRounding = 0.0f;
                style.TabBorderSize = 0.0f;
                style.TabMinWidthForCloseButton = 0.0f;
                style.ColorButtonPosition = ImGuiDir_Right;
                style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
                style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

                style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
                style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.2745098173618317f, 0.3176470696926117f, 0.4509803950786591f, 1.0f);
                style.Colors[ImGuiCol_WindowBg] = ImVec4(0.0784313753247261f, 0.08627451211214066f, 0.1019607856869698f, 1.0f);
                style.Colors[ImGuiCol_ChildBg] = ImVec4(0.09250493347644806f, 0.100297249853611f, 0.1158798336982727f, 1.0f);
                style.Colors[ImGuiCol_PopupBg] = ImVec4(0.0784313753247261f, 0.08627451211214066f, 0.1019607856869698f, 1.0f);
                style.Colors[ImGuiCol_Border] = ImVec4(0.1568627506494522f, 0.168627455830574f, 0.1921568661928177f, 1.0f);
                style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.0784313753247261f, 0.08627451211214066f, 0.1019607856869698f, 1.0f);
                style.Colors[ImGuiCol_FrameBg] = ImVec4(0.4f, 0.4f, 0.4f, 1.0f);  // Lighter frame background
                style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.45f, 0.45f, 0.45f, 1.0f);  // Lighter when hovered
                style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.55f, 0.55f, 0.55f, 1.0f);  // Lighter when active
                style.Colors[ImGuiCol_TitleBg] = ImVec4(0.0470588244497776f, 0.05490196123719215f, 0.07058823853731155f, 1.0f);
                style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.0470588244497776f, 0.05490196123719215f, 0.07058823853731155f, 1.0f);
                style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.0784313753247261f, 0.08627451211214066f, 0.1019607856869698f, 1.0f);
                style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.09803921729326248f, 0.105882354080677f, 0.1215686276555061f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.0470588244497776f, 0.05490196123719215f, 0.07058823853731155f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.1176470592617989f, 0.1333333402872086f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.1568627506494522f, 0.168627455830574f, 0.1921568661928177f, 1.0f);
                style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.1176470592617989f, 0.1333333402872086f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_CheckMark] = ImVec4(0.9725490212440491f, 1.0f, 0.4980392158031464f, 1.0f);
                style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.971993625164032f, 1.0f, 0.4980392456054688f, 1.0f);
                style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(1.0f, 0.7953379154205322f, 0.4980392456054688f, 1.0f);
                style.Colors[ImGuiCol_Button] = ImVec4(0.1176470592617989f, 0.1333333402872086f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.1821731775999069f, 0.1897992044687271f, 0.1974248886108398f, 1.0f);
                style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.1545050293207169f, 0.1545048952102661f, 0.1545064449310303f, 1.0f);
                style.Colors[ImGuiCol_Header] = ImVec4(0.1414651423692703f, 0.1629818230867386f, 0.2060086131095886f, 1.0f);
                style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.1072951927781105f, 0.107295036315918f, 0.1072961091995239f, 1.0f);
                style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.0784313753247261f, 0.08627451211214066f, 0.1019607856869698f, 1.0f);
                style.Colors[ImGuiCol_Separator] = ImVec4(0.1293079704046249f, 0.1479243338108063f, 0.1931330561637878f, 1.0f);
                style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.1568627506494522f, 0.1843137294054031f, 0.250980406999588f, 1.0f);
                style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.1568627506494522f, 0.1843137294054031f, 0.250980406999588f, 1.0f);
                style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.1459212601184845f, 0.1459220051765442f, 0.1459227204322815f, 1.0f);
                style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.9725490212440491f, 1.0f, 0.4980392158031464f, 1.0f);
                style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.999999463558197f, 1.0f, 0.9999899864196777f, 1.0f);
                style.Colors[ImGuiCol_Tab] = ImVec4(0.0784313753247261f, 0.08627451211214066f, 0.1019607856869698f, 1.0f);
                style.Colors[ImGuiCol_TabHovered] = ImVec4(0.1176470592617989f, 0.1333333402872086f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_TabActive] = ImVec4(0.1176470592617989f, 0.1333333402872086f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.0784313753247261f, 0.08627451211214066f, 0.1019607856869698f, 1.0f);
                style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.1249424293637276f, 0.2735691666603088f, 0.5708154439926147f, 1.0f);
                style.Colors[ImGuiCol_PlotLines] = ImVec4(0.5215686559677124f, 0.6000000238418579f, 0.7019608020782471f, 1.0f);
                style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.03921568766236305f, 0.9803921580314636f, 0.9803921580314636f, 1.0f);
                style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.8841201663017273f, 0.7941429018974304f, 0.5615870356559753f, 1.0f);
                style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.9570815563201904f, 0.9570719599723816f, 0.9570761322975159f, 1.0f);
                style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.0470588244497776f, 0.05490196123719215f, 0.07058823853731155f, 1.0f);
                style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.0470588244497776f, 0.05490196123719215f, 0.07058823853731155f, 1.0f);
                style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
                style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.1176470592617989f, 0.1333333402872086f, 0.1490196138620377f, 1.0f);
                style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(0.09803921729326248f, 0.105882354080677f, 0.1215686276555061f, 1.0f);
                style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.9356134533882141f, 0.9356129765510559f, 0.9356223344802856f, 1.0f);
                style.Colors[ImGuiCol_DragDropTarget] = ImVec4(0.4980392158031464f, 0.5137255191802979f, 1.0f, 1.0f);
                style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.266094446182251f, 0.2890366911888123f, 1.0f, 1.0f);
                style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.4980392158031464f, 0.5137255191802979f, 1.0f, 1.0f);
                style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.196078434586525f, 0.1764705926179886f, 0.5450980663299561f, 0.501960813999176f);
                style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.196078434586525f, 0.1764705926179886f, 0.5450980663299561f, 0.501960813999176f);
            }
        }
    }


    namespace Tabs 
    {
        void TABPlayer()
        {
            ImGui::Checkbox("Speed Hack", &Config.IsSpeedHack);

            ImGui::SliderFloat("Speed Modifilers", &Config.SpeedModiflers, 1, 10);

            ImGui::Checkbox("Damage Hack", &Config.IsAttackModiler);

            ImGui::SliderInt("Damage Modifilers", &Config.DamageUp, 1, 20000);

            ImGui::Checkbox("Defense Hack", &Config.IsDefuseModiler);

            ImGui::SliderInt("Defense Modifilers", &Config.DefuseUp, 1, INT_MAX);

            ImGui::Checkbox("Inf Stamina", &Config.IsInfStamina);

            ImGui::Checkbox("Inf Ammo", &Config.IsInfinAmmo);

            ImGui::Checkbox("Godmode", &Config.IsGodMode);

            static char chNewName[20];
            ImGui::InputText("New Name", chNewName, IM_ARRAYSIZE(chNewName));

            if (ImGui::Button("Set New Name", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
            {
                if (Config.GetPalPlayerCharacter() != NULL)
                {
                    if (Config.GetPalPlayerCharacter()->GetPalPlayerController() != NULL)
                    {
                        SDK::UKismetStringLibrary* lib = SDK::UKismetStringLibrary::GetDefaultObj();

                        wchar_t  ws[255];
                        swprintf(ws, 255, L"%hs", chNewName);

                        Config.GetPalPlayerCharacter()->GetPalPlayerController()->UpdateCharacterNickName_ToServer(Config.GetPalPlayerCharacter()->CharacterParameterComponent->IndividualHandle->ID, SDK::FString(ws));
                    }
                }
            }                        
        }
        
        void TABExploit()
        {
            ImGui::Checkbox("Show Quick Tab", &Config.IsQuick);
            ImGui::Checkbox("Open Manager Menu", &Config.bisOpenManager);
            ImGui::Checkbox("Show Teleporter Tab", &Config.bisTeleporter);
            //creadit 
            //ImGui::Checkbox("PalIsMonster", &Config.IsMonster);
            ImGui::InputInt("EXP:", &Config.EXP);
            ImGui::InputText("Item Name", Config.ItemName,sizeof(Config.ItemName));
            ImGui::InputInt("Item Num", &Config.Item);
            if (ImGui::Button("Give item", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
            {
                SDK::APalPlayerCharacter* p_appc = Config.GetPalPlayerCharacter();
                SDK::APalPlayerState* p_apps = Config.GetPalPlayerState();
                if (p_appc && p_apps)
                {
                    SDK::UPalPlayerInventoryData* InventoryData = Config.GetPalPlayerCharacter()->GetPalPlayerController()->GetPalPlayerState()->GetInventoryData();
                    if (InventoryData && (Config.ItemName != NULL))
                    {
                        g_Console->printdbg("\n\n[+] ItemName: %s [+]\n\n", Console::Colors::green, Config.ItemName);
                        AddItemToInventoryByName(InventoryData, Config.ItemName, Config.Item);
                    }
                }
            }

            ImGui::InputInt("Slot to modify (starts @ 0):", &Config.AddItemSlot);
            ImGui::InputInt("Multiple of how much:", &Config.AddItemCount);
            
            if (ImGui::Button("Give items from slot", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                IncrementInventoryItemCountByIndex(Config.AddItemCount, Config.AddItemSlot);
                       
            if (ImGui::Button("Discover All Effigies", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                UnlockAllEffigies();

            if (ImGui::Button("Toggle Fly", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
            {
                Config.IsToggledFly = !Config.IsToggledFly;
                ExploitFly(Config.IsToggledFly);
            }


            if (ImGui::Button("Revive/Fill HP", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                ReviveLocalPlayer();

            //Creadit WoodgamerHD
            if (ImGui::Button("Give exp", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                GiveExperiencePoints(Config.EXP);
        }
        
        void TABConfig()
        {
            
            ImGui::Text("Pal Menu");
            ImGui::Text("github.com/Sinnisterly");

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();
            if (ImGui::Button("UNHOOK DLL", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20))) {
#if DEBUG
                g_Console->printdbg("\n\n[+] UNHOOK INITIALIZED [+]\n\n", Console::Colors::red);

#endif
                g_KillSwitch = TRUE;
            }
        }
        
        void TABDatabase()
        {           

            ImGui::InputText("Filter", Config.inputTextBuffer, sizeof(Config.inputTextBuffer), ImGuiInputTextFlags_CallbackCharFilter, InputTextCallback);

            Config.Update(Config.inputTextBuffer);

            const auto& filteredItems = Config.GetFilteredItems();

            for (const auto& itemName : filteredItems) {
                if (ImGui::Button(itemName.c_str())) 
                {
                        strcpy_s(Config.ItemName, itemName.c_str());
                        continue;
                }
            }
        }
        
        void TABTeleporter()
        {
            ImGui::Checkbox("Safe Teleport", &Config.IsSafe);
            if (ImGui::Button("Home", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                RespawnLocalPlayer(Config.IsSafe);

            ImGui::InputFloat3("Pos",Config.Pos);
            ImGui::SameLine();
            if (ImGui::Button("TP", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
            {
                SDK::FVector vector = { Config.Pos[0],Config.Pos[1],Config.Pos[2] };
                AnyWhereTP(vector, Config.IsSafe);
            }

            for (const auto& pair : database::locationMap) 
            {
                const std::string& locationName = pair.first;
                if (ImGui::Button(locationName.c_str())) 
                {
                    SDK::FVector location = SDK::FVector(pair.second[0], pair.second[1], pair.second[2]);
                    AnyWhereTP(location, Config.IsSafe);
                }
            }
        }

        void TABItemSpawner()
        {
            static int num_to_add = 1;
            static int category = 0;

            ImGui::InputInt("Num To Add", &num_to_add);

            ImGui::Combo("Item Category", &category, "Accessories\0Ammo\0Armor\0Crafting Materials\0Eggs\0Food\0Hats\0\Medicine\0Money\0Other\0Pal Spheres\0Seeds\0Tools\0Weapons\0");

            std::initializer_list list = itemlist::accessories;

            switch (category)
            {
                case 1:
                    list = itemlist::ammo;
                    break;
                case 2:
                    list = itemlist::armor;
                    break;
                case 3:
                    list = itemlist::craftingmaterials;
                    break;
                case 4:
                    list = itemlist::eggs;
                    break;
                case 5:
                    list = itemlist::food;
                    break;
                case 6:
                    list = itemlist::hats;
                    break;
                case 7:
                    list = itemlist::medicine;
                    break;
                case 8:
                    list = itemlist::money;
                    break;
                case 9:
                    list = itemlist::other;
                    break;
                case 10:
                    list = itemlist::palspheres;
                    break;
                case 11:
                    list = itemlist::seeds;
                    break;
                case 12:
                    list = itemlist::tools;
                    break;
                case 13:
                    list = itemlist::weapons;
                    break;
                default:
                    list = itemlist::accessories;
            }

            int cur_size = 0;

            static char item_search[100];

            ImGui::InputText("Search", item_search, IM_ARRAYSIZE(item_search));

            for (const auto& item : list) {
                std::istringstream ss(item);
                std::string left_text, right_text;

                std::getline(ss, left_text, '|');
                std::getline(ss, right_text);

                auto right_to_lower = right_text;
                std::string item_search_to_lower = item_search;

                std::transform(right_to_lower.begin(), right_to_lower.end(), right_to_lower.begin(), ::tolower);
                std::transform(item_search_to_lower.begin(), item_search_to_lower.end(), item_search_to_lower.begin(), ::tolower);

                if (item_search[0] != '\0' && (right_to_lower.find(item_search_to_lower) == std::string::npos))
                    continue;

                if (cur_size != 0 && cur_size < 20)
                {
                    ImGui::SameLine();
                }
                else if (cur_size != 0)
                {
                    cur_size = 0;
                }

                cur_size += right_text.length();

                ImGui::PushID(item);
                if (ImGui::Button(right_text.c_str()))
                {
                    SDK::UPalPlayerInventoryData* InventoryData = Config.GetPalPlayerCharacter()->GetPalPlayerController()->GetPalPlayerState()->GetInventoryData();
                    AddItemToInventoryByName(InventoryData, (char*)left_text.c_str(), num_to_add);
                }
                ImGui::PopID();
            }
        }

        void TABQuick()
        {
            if (ImGui::Button("Basic Items stack", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                SpawnMultiple_ItemsToInventory(config::QuickItemSet::basic_items_stackable);

            if (ImGui::Button("Basic Items single", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                SpawnMultiple_ItemsToInventory(config::QuickItemSet::basic_items_single);

            if (ImGui::Button("Unlock Pal skills", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                SpawnMultiple_ItemsToInventory(config::QuickItemSet::pal_unlock_skills);

            if (ImGui::Button("Spheres", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                SpawnMultiple_ItemsToInventory(config::QuickItemSet::spheres);

            if (ImGui::Button("Tools", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::tools);
        }
        
        void TABDebug()
        {
            if (ImGui::Checkbox("Debug ESP", &Config.isDebugESP) && !Config.isDebugESP)
                Config.mDebugESPDistance = 10.f;
            if (Config.isDebugESP)
            {
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##DISTANCE", &Config.mDebugESPDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
            }

            if (ImGui::Checkbox("TP Pals to Crosshair", &Config.IsTeleportAllToXhair) && !Config.IsTeleportAllToXhair)
                Config.mDebugEntCapDistance = 10.f;
            if (Config.IsTeleportAllToXhair)
            {
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##ENT_CAP_DISTANCE", &Config.mDebugEntCapDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
            }
            
            if (ImGui::Checkbox("Kill Aura", &Config.IsDeathAura) && !Config.IsDeathAura)
            {
                Config.mDeathAuraDistance = 10.0f;
                Config.mDeathAuraAmount = 1;
            }
            if (Config.IsDeathAura)
            {
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x * .7);
                ImGui::SliderFloat("##AURA_DISTANCE", &Config.mDeathAuraDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderInt("##AURA_DMG", &Config.mDeathAuraAmount, 1, 10, "%d", ImGuiSliderFlags_AlwaysClamp);
            }

            if (ImGui::Button("PRINT ENGINE GLOBALS", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
            {

                g_Console->printdbg("[+] [UNREAL ENGINE GLOBALS]\n"
                    "UWorld:\t\t\t0x%llX\n"
                    "ULocalPlayer:\t\t0x%llX\n"
                    "APalPlayerController:\t0x%llX\n"
                    "APalPlayerCharacter:\t0x%llX\n"
                    "APalPlayerState:\t0x%llX\n"
                    "UCharacterImpMan:\t0x%llX\n"
                    "UPalPlayerInventory:\t0x%llX\n"
                    "APalWeaponBase:\t\t0x%llX\n",
                    Console::Colors::yellow, 
                    Config.gWorld,
                    Config.GetLocalPlayer(),
                    Config.GetPalPlayerController(),
                    Config.GetPalPlayerCharacter(),
                    Config.GetPalPlayerState(),
                    Config.GetCharacterImpManager(),
                    Config.GetInventoryComponent(),
                    Config.GetPlayerEquippedWeapon()
                );
                
            }

            //  Get Function Pointer Offset
            ImGui::InputTextWithHint("##INPUT", "INPUT GOBJECT fn NAME", inputBuffer_getFnAddr, 100);
            ImGui::SameLine();
            if (ImGui::Button("GET fn", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
            {
                std::string input = inputBuffer_getFnAddr;
                SDK::UFunction* object = SDK::UObject::FindObject<SDK::UFunction>(input);
                if (object)
                {
                    static __int64 dwHandle = reinterpret_cast<__int64>(GetModuleHandle(0));
                    void* fnAddr = object->ExecFunction;
                    unsigned __int64 fnOffset = (reinterpret_cast<__int64>(fnAddr) - dwHandle);
                    g_Console->printdbg("[+] Found [%s] -> 0x%llX\n", Console::Colors::yellow, input.c_str(), fnOffset);
                }
                else
                    g_Console->printdbg("[!] OBJECT [%s] NOT FOUND!\n", Console::Colors::red, input.c_str());
                memset(inputBuffer_getFnAddr, 0, 100);
            }


            //  Get Class pointer by name
            ImGui::InputTextWithHint("##INPUT_GETCLASS", "INPUT OBJECT CLASS NAME", inputBuffer_getClass, 100);
            ImGui::SameLine();
            if (ImGui::Button("GET CLASS", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
            {
                std::string input = inputBuffer_getClass;
                SDK::UClass* czClass = SDK::UObject::FindObject<SDK::UClass>(input.c_str());
                if (czClass)
                {
                    static __int64 dwHandle = reinterpret_cast<__int64>(GetModuleHandle(0));
                    g_Console->printdbg("[+] Found [%s] -> 0x%llX\n", Console::Colors::yellow, input.c_str(), czClass->Class);
                }
                else
                    g_Console->printdbg("[!] CLASS [%s] NOT FOUND!\n", Console::Colors::red, input.c_str());

            }

            //  Waypoints
            ImGui::InputTextWithHint("##INPUT_SETWAYPOINT", "CUSTOM WAYPOINT NAME", inputBuffer_setWaypoint, 32);
            ImGui::SameLine();
            if (ImGui::Button("SET", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
            {
                std::string wpName = inputBuffer_setWaypoint;
                if (wpName.size() > 0)
                {
                    AddWaypointLocation(wpName);
                    memset(inputBuffer_setWaypoint, 0, 32);
                }
            }
            if (Config.db_waypoints.size() > 0)
            {
                if (ImGui::BeginChild("##CHILD_WAYPOINTS", { 0.0f, 100.f }))
                {
                    DWORD index = -1;
                    for (auto waypoint : Config.db_waypoints)
                    {
                        index++;
                        ImGui::PushID(index);
                        //  ImGui::Checkbox("SHOW", &waypoint.bIsShown);
                        //  ImGui::SameLine();
                        if (ImGui::Button(waypoint.waypointName.c_str(), ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                            AnyWhereTP(waypoint.waypointLocation, false);
                        ImGui::PopID();
                    }

                    ImGui::EndChild();
                }
            }
        }
	}

	void Menu::Draw()
	{

		if (g_GameVariables->m_ShowMenu)
			MainMenu();

		if (g_GameVariables->m_ShowHud)
			HUD(&g_GameVariables->m_ShowHud);

		if (g_GameVariables->m_ShowDemo)
			ImGui::ShowDemoWindow();
	}

    void Menu::ManagerMenu()
    {
        if (!ImGui::Begin("Manager", &g_GameVariables->m_ShowMenu, 96))
        {
            ImGui::End();
            return;
        }

        
        if (Config.gWorld)
        {
            ImGui::Checkbox("filterPlayer", &Config.filterPlayer);
            SDK::TArray<SDK::AActor*> T = Config.GetUWorld()->PersistentLevel->Actors;
            for (int i = 0; i < T.Num(); i++)
            {
                if (!T[i])
                    continue;

                if (!T[i]->IsA(SDK::APalCharacter::StaticClass()))
                    continue;

                SDK::APalCharacter* Character = (SDK::APalCharacter*)T[i];
                SDK::FString name;
                if (Config.filterPlayer)
                {
                    if (!T[i]->IsA(SDK::APalPlayerCharacter::StaticClass()))
                        continue;
                }
                if (T[i]->IsA(SDK::APalPlayerCharacter::StaticClass()))
                {
                    if (!Character)
                        continue;

                    Character->CharacterParameterComponent->GetNickname(&name);
                }
                else
                {
                    SDK::UKismetStringLibrary* lib = SDK::UKismetStringLibrary::GetDefaultObj();
                    if (!Character)
                        continue;

                    std::string s = Character->GetFullName();
                    size_t firstUnderscorePos = s.find('_');

                    if (firstUnderscorePos != std::string::npos) 
                    {
                        std::string result = s.substr(firstUnderscorePos + 1);

                        size_t secondUnderscorePos = result.find('_');

                        if (secondUnderscorePos != std::string::npos) {
                            result = result.substr(0, secondUnderscorePos);
                        }
                        wchar_t  ws[255];
                        swprintf(ws, 255, L"%hs", result);
                        name = SDK::FString(ws);
                    }
                }
                ImGui::Text(name.ToString().c_str());
                ImGui::SameLine();
                ImGui::PushID(i);
                if (ImGui::Button("Kill"))
                {
                    if (T[i]->IsA(SDK::APalCharacter::StaticClass()))
                        SendDamageToActor(Character, INT_MAX);
                }
                ImGui::SameLine();
                if (ImGui::Button("TP"))
                {
                    if (Config.GetPalPlayerCharacter() != NULL)
                    {
                        if (Character)
                        {
                            SDK::FVector vector = Character->K2_GetActorLocation();
                            AnyWhereTP(vector, Config.IsSafe);
                        }
                    }
                }

                if (Character->IsA(SDK::APalPlayerCharacter::StaticClass()))
                {                   
                    ImGui::SameLine();
                    if (ImGui::Button("MaskIt"))
                    {
                        if (Config.GetPalPlayerCharacter() != NULL)
                        {
                            auto controller = Config.GetPalPlayerCharacter()->GetPalPlayerController();
                            if (controller != NULL)
                            {
                                auto player = (SDK::APalPlayerCharacter*)Character;
                                SDK::FString fakename;
                                player->CharacterParameterComponent->GetNickname(&fakename);
                                Config.GetPalPlayerCharacter()->GetPalPlayerController()->UpdateCharacterNickName_ToServer(Config.GetPalPlayerCharacter()->CharacterParameterComponent->IndividualHandle->ID, fakename);
                            }
                        }
                    }
                }
                ImGui::PopID();
            }

        }

        if (Config.GetUWorld() != NULL)
        {
        }
        
        ImGui::End();
    }
	
    void Menu::MainMenu()
	{
        if (!g_GameVariables->m_ShowDemo)
            Styles::InitStyle();

        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(g_Menu->dbg_RAINBOW));
        }
        if (!ImGui::Begin("PalWorld", &g_GameVariables->m_ShowMenu, 96))
        {
            ImGui::End();
            return;
        }
        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
        }
        
        ImGuiContext* pImGui = GImGui;

        //  Display Menu Content
        //Tabs::TABMain();

        ImGui::Text("Palworld Menu v1");

        if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_None))
        {
            if (ImGui::BeginTabItem("Player"))
            {
                Tabs::TABPlayer();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Exploit"))
            {
                Tabs::TABExploit();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Database"))
            {
                Tabs::TABDatabase();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Item Spawner"))
            {
                Tabs::TABItemSpawner();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Config"))
            {
                Tabs::TABConfig();
                ImGui::EndTabItem();
            }
#if DEBUG
            if (ImGui::BeginTabItem("Debug"))
            {
                Tabs::TABDebug();
                ImGui::EndTabItem();
            }
#endif
            if (Config.IsQuick && ImGui::BeginTabItem("Quick"))
            {
                Tabs::TABQuick();
                ImGui::EndTabItem();
            }
            if (Config.bisTeleporter && ImGui::BeginTabItem("Teleporter"))
            {
                Tabs::TABTeleporter();
                ImGui::EndTabItem();
            }
            ImGui::EndTabBar();
        }
        ImGui::End();



        if (Config.bisOpenManager)
            ManagerMenu();
	}

	void Menu::HUD(bool* p_open)
	{
        
        ImGui::SetNextWindowPos(g_D3D11Window->pViewport->WorkPos);
        ImGui::SetNextWindowSize(g_D3D11Window->pViewport->WorkSize);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, NULL);
        ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.00f, 0.00f, 0.00f, 0.00f));
        if (!ImGui::Begin("##HUDWINDOW", (bool*)true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoInputs))
        {
            ImGui::PopStyleColor();
            ImGui::PopStyleVar();
            ImGui::End();
            return;
        }
        ImGui::PopStyleColor();
        ImGui::PopStyleVar();

        auto ImDraw = ImGui::GetWindowDrawList();
        auto draw_size = g_D3D11Window->pViewport->WorkSize;
        auto center = ImVec2({ draw_size.x * .5f, draw_size.y * .5f });
        auto top_center = ImVec2({ draw_size.x * .5f, draw_size.y * 0.0f });
        

        if (Config.IsESP)
            ESP();

        if (Config.isDebugESP)
            ESP_DEBUG(Config.mDebugESPDistance);

        if (Config.db_waypoints.size() > 0)
            RenderWaypointsToScreen();

        ImGui::End();
	}

    void Menu::Loops()
    {
        //  Respawn
        if ((GetAsyncKeyState(VK_F5) & 1))
            RespawnLocalPlayer(Config.IsSafe);

        //  Revive Player
        if ((GetAsyncKeyState(VK_F6) & 1))
            ReviveLocalPlayer();

        //  
        if (Config.IsSpeedHack)
            SpeedHack(Config.SpeedModiflers);
        
        //  
        if (Config.IsAttackModiler)
            SetPlayerAttackParam(Config.DamageUp);

        //  
        if (Config.IsDefuseModiler)
            SetPlayerDefenseParam(Config.DefuseUp);

        //  
        if (Config.IsInfStamina)
            ResetStamina();

        if (Config.IsTeleportAllToXhair)
            TeleportAllPalsToCrosshair(Config.mDebugEntCapDistance);

        if (Config.IsDeathAura)
            DeathAura(Config.mDeathAuraAmount, Config.mDeathAuraDistance, true);


        if (Config.IsGodMode)
            SetPlayerHealth(INT_MAX);

        SetInfiniteAmmo(Config.IsInfinAmmo);
    }
}