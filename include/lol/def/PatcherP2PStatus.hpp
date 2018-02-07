#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PatcherP2PStatus { 
    bool isEnabledForPatchline;
    bool isAllowedByUser;
    bool requiresRestart; 
  };
  inline void to_json(json& j, const PatcherP2PStatus& v) {
    j["isEnabledForPatchline"] = v.isEnabledForPatchline; 
    j["isAllowedByUser"] = v.isAllowedByUser; 
    j["requiresRestart"] = v.requiresRestart; 
  }
  inline void from_json(const json& j, PatcherP2PStatus& v) {
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>(); 
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>(); 
    v.requiresRestart = j.at("requiresRestart").get<bool>(); 
  }
}