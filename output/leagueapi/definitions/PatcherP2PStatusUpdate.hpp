#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PatcherP2PStatusUpdate { /**/ 
    bool isAllowedByUser;/**/
  };
  static void to_json(json& j, const PatcherP2PStatusUpdate& v) { 
    j["isAllowedByUser"] = v.isAllowedByUser;
  }
  static void from_json(const json& j, PatcherP2PStatusUpdate& v) { 
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>(); 
  }
} 