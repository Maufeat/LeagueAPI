#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMissionsEntitlementsToken { 
    std::vector<std::string> entitlements; 
  };
  inline void to_json(json& j, const LolMissionsEntitlementsToken& v) {
    j["entitlements"] = v.entitlements; 
  }
  inline void from_json(const json& j, LolMissionsEntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
  }
}