#pragma once
#include "../base_def.hpp" 
#include "LolLoadoutsItemKey.hpp"
namespace lol {
  struct LolLoadoutsFrontendInventoryResponse { 
    std::vector<LolLoadoutsItemKey> entitlements; 
  };
  inline void to_json(json& j, const LolLoadoutsFrontendInventoryResponse& v) {
    j["entitlements"] = v.entitlements; 
  }
  inline void from_json(const json& j, LolLoadoutsFrontendInventoryResponse& v) {
    v.entitlements = j.at("entitlements").get<std::vector<LolLoadoutsItemKey>>(); 
  }
}