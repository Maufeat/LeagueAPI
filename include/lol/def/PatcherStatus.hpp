#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PatcherStatus { 
    bool connectedToPatchServer;
    bool hasUpdatesOnRestart;
    bool willRestartOnSelfUpdate;
    std::optional<uint32_t> successfullyInstalledVersion; 
  };
  inline void to_json(json& j, const PatcherStatus& v) {
    j["connectedToPatchServer"] = v.connectedToPatchServer; 
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart; 
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate; 
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
  }
  inline void from_json(const json& j, PatcherStatus& v) {
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>(); 
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>(); 
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>(); 
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() && !it->is_null())
      v.successfullyInstalledVersion = it->get<std::optional<uint32_t>>(); 
  }
}