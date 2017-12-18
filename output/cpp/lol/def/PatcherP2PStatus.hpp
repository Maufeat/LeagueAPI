#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherP2PStatus { 
    bool requiresRestart;
    bool isAllowedByUser;
    bool isEnabledForPatchline; 
  };
  inline void to_json(json& j, const PatcherP2PStatus& v) {
    j["requiresRestart"] = v.requiresRestart; 
    j["isAllowedByUser"] = v.isAllowedByUser; 
    j["isEnabledForPatchline"] = v.isEnabledForPatchline; 
  }
  inline void from_json(const json& j, PatcherP2PStatus& v) {
    v.requiresRestart = j.at("requiresRestart").get<bool>(); 
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>(); 
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>(); 
  }
}