#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryCacheEntry { 
    bool valid;
    uint64_t expirationMS;
    std::string signedInventoryJwt; 
  };
  inline void to_json(json& j, const LolInventoryCacheEntry& v) {
    j["valid"] = v.valid; 
    j["expirationMS"] = v.expirationMS; 
    j["signedInventoryJwt"] = v.signedInventoryJwt; 
  }
  inline void from_json(const json& j, LolInventoryCacheEntry& v) {
    v.valid = j.at("valid").get<bool>(); 
    v.expirationMS = j.at("expirationMS").get<uint64_t>(); 
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>(); 
  }
}