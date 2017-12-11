#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMissionsEntitlementsToken { /**/ 
    std::vector<std::string> entitlements;/**/
  };
  static void to_json(json& j, const LolMissionsEntitlementsToken& v) { 
    j["entitlements"] = v.entitlements;
  }
  static void from_json(const json& j, LolMissionsEntitlementsToken& v) { 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
  }
} 