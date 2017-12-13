#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherStatus { 
    bool willRestartOnSelfUpdate;
    bool connectedToPatchServer;
    std::optional<uint32_t> successfullyInstalledVersion;
    bool hasUpdatesOnRestart; 
  };
  void to_json(json& j, const PatcherStatus& v) {
  j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate; 
  j["connectedToPatchServer"] = v.connectedToPatchServer; 
  j["successfullyInstalledVersion"] = v.successfullyInstalledVersion; 
  j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart; 
  }
  void from_json(const json& j, PatcherStatus& v) {
  v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>(); 
  v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>(); 
  v.successfullyInstalledVersion = j.at("successfullyInstalledVersion").get<std::optional<uint32_t>>(); 
  v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>(); 
  }
}