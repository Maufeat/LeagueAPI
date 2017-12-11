#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolInventoryCacheEntry { /**/ 
    bool valid;/**/
    std::string signedInventoryJwt;/**/
    uint64_t expirationMS;/**/
  };
  static void to_json(json& j, const LolInventoryCacheEntry& v) { 
    j["valid"] = v.valid;
    j["signedInventoryJwt"] = v.signedInventoryJwt;
    j["expirationMS"] = v.expirationMS;
  }
  static void from_json(const json& j, LolInventoryCacheEntry& v) { 
    v.valid = j.at("valid").get<bool>(); 
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>(); 
    v.expirationMS = j.at("expirationMS").get<uint64_t>(); 
  }
} 