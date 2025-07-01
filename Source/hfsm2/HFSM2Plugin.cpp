#include "HFSM2Plugin.h"

#include "Engine/Scripting/Plugins/PluginManager.h"

HFSM2Plugin::HFSM2Plugin(const SpawnParams& params)
    : GamePlugin(params)
{
    _description.Category = TEXT("Release");
#if USE_EDITOR
    _description.Description = TEXT("HFSM2 plugin that allows using the library throughout the project.");
    _description.Author = TEXT("Andrew Gresyk");
    _description.Version = Version(2, 7, 1);
    _description.HomepageUrl = TEXT("https://hfsm.dev/");
    _description.RepositoryUrl = TEXT("https://github.com/Weyzu/hfsm2-flax");
#endif
}

HFSM2Plugin* HFSM2Plugin::GetInstance()
{
    return PluginManager::GetPlugin<HFSM2Plugin>();
}

void HFSM2Plugin::Initialize()
{
    GamePlugin::Initialize();
}

void HFSM2Plugin::Deinitialize()
{
    GamePlugin::Deinitialize();
}
