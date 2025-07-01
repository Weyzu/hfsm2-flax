#pragma once

#include "Engine/Scripting/Plugins/GamePlugin.h"

API_CLASS(Namespace="") class HFSM2_API HFSM2Plugin : public GamePlugin
{
    DECLARE_SCRIPTING_TYPE(HFSM2Plugin);

public:
    /// <summary>
    /// Gets the singleton instance of the hfsm2 plugin.
    /// </summary>
    API_PROPERTY() static HFSM2Plugin* GetInstance();

private:
    // [GamePlugin]
    void Initialize() override;
    void Deinitialize() override;
};
