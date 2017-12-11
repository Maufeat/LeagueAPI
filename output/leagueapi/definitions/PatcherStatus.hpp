#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PatcherStatus { /**/ 
    std::optional<uint32_t> successfullyInstalledVersion;/**/
    bool connectedToPatchServer;/**/
    bool hasUpdatesOnRestart;/**/
    bool willRestartOnSelfUpdate;/**/
  };
  static void to_json(json& j, const PatcherStatus& v) { 
    j["successfullyInstalledVersion"] = v.successfullyInstalledVersion;
    j["connectedToPatchServer"] = v.connectedToPatchServer;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
  }
  static void from_json(const json& j, PatcherStatus& v) { 
    v.successfullyInstalledVersion = j.at("successfullyInstalledVersion").get<std::optional<uint32_t>>(); 
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>(); 
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>(); 
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>(); 
  }
} 