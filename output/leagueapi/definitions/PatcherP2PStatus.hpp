#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PatcherP2PStatus { /**/ 
    bool isAllowedByUser;/**/
    bool isEnabledForPatchline;/**/
    bool requiresRestart;/**/
  };
  static void to_json(json& j, const PatcherP2PStatus& v) { 
    j["isAllowedByUser"] = v.isAllowedByUser;
    j["isEnabledForPatchline"] = v.isEnabledForPatchline;
    j["requiresRestart"] = v.requiresRestart;
  }
  static void from_json(const json& j, PatcherP2PStatus& v) { 
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>(); 
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>(); 
    v.requiresRestart = j.at("requiresRestart").get<bool>(); 
  }
} 