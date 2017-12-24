#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryCacheEntry { 
    std::string signedInventoryJwt;
    uint64_t expirationMS;
    bool valid; 
  };
  inline void to_json(json& j, const LolInventoryCacheEntry& v) {
    j["signedInventoryJwt"] = v.signedInventoryJwt; 
    j["expirationMS"] = v.expirationMS; 
    j["valid"] = v.valid; 
  }
  inline void from_json(const json& j, LolInventoryCacheEntry& v) {
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>(); 
    v.expirationMS = j.at("expirationMS").get<uint64_t>(); 
    v.valid = j.at("valid").get<bool>(); 
  }
}