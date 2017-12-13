#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMissionsEntitlementsToken { 
    std::vector<std::string> entitlements; 
  };
  void to_json(json& j, const LolMissionsEntitlementsToken& v) {
    j["entitlements"] = v.entitlements; 
  }
  void from_json(const json& j, LolMissionsEntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
  }
}