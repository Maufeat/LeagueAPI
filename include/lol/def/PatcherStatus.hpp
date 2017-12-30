#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PatcherStatus { 
    std::optional<uint32_t> successfullyInstalledVersion;
    bool willRestartOnSelfUpdate;
    bool hasUpdatesOnRestart;
    bool connectedToPatchServer; 
  };
  inline void to_json(json& j, const PatcherStatus& v) {
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate; 
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart; 
    j["connectedToPatchServer"] = v.connectedToPatchServer; 
  }
  inline void from_json(const json& j, PatcherStatus& v) {
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() && !it->is_null())
      v.successfullyInstalledVersion = it->get<std::optional<uint32_t>>(); 
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>(); 
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>(); 
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>(); 
  }
}