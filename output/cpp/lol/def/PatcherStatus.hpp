#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherStatus { 
    bool willRestartOnSelfUpdate;
    bool connectedToPatchServer;
    std::optional<uint32_t> successfullyInstalledVersion;
    bool hasUpdatesOnRestart; 
  };
  inline void to_json(json& j, const PatcherStatus& v) {
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate; 
    j["connectedToPatchServer"] = v.connectedToPatchServer; 
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart; 
  }
  inline void from_json(const json& j, PatcherStatus& v) {
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>(); 
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>(); 
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() && !it->is_null())
      v.successfullyInstalledVersion = it->get<std::optional<uint32_t>>(); 
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>(); 
  }
}