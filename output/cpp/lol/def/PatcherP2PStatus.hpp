#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherP2PStatus { 
    bool isAllowedByUser;
    bool isEnabledForPatchline;
    bool requiresRestart; 
  };
  void to_json(json& j, const PatcherP2PStatus& v) {
  j["isAllowedByUser"] = v.isAllowedByUser; 
  j["isEnabledForPatchline"] = v.isEnabledForPatchline; 
  j["requiresRestart"] = v.requiresRestart; 
  }
  void from_json(const json& j, PatcherP2PStatus& v) {
  v.isAllowedByUser = j.at("isAllowedByUser").get<bool>(); 
  v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>(); 
  v.requiresRestart = j.at("requiresRestart").get<bool>(); 
  }
}