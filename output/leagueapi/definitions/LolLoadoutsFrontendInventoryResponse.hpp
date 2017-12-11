#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLoadoutsItemKey.hpp>"

namespace leagueapi {
  struct LolLoadoutsFrontendInventoryResponse { /**/ 
    std::vector<LolLoadoutsItemKey> entitlements;/**/
  };
  static void to_json(json& j, const LolLoadoutsFrontendInventoryResponse& v) { 
    j["entitlements"] = v.entitlements;
  }
  static void from_json(const json& j, LolLoadoutsFrontendInventoryResponse& v) { 
    v.entitlements = j.at("entitlements").get<std::vector<LolLoadoutsItemKey>>(); 
  }
} 