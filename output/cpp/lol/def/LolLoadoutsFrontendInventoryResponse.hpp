#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoadoutsItemKey.hpp>
namespace lol {
  struct LolLoadoutsFrontendInventoryResponse { 
    std::vector<LolLoadoutsItemKey> entitlements; 
  };
  void to_json(json& j, const LolLoadoutsFrontendInventoryResponse& v) {
  j["entitlements"] = v.entitlements; 
  }
  void from_json(const json& j, LolLoadoutsFrontendInventoryResponse& v) {
  v.entitlements = j.at("entitlements").get<std::vector<LolLoadoutsItemKey>>(); 
  }
}