#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryCacheEntry { 
    bool valid;
    std::string signedInventoryJwt;
    uint64_t expirationMS; 
  };
  void to_json(json& j, const LolInventoryCacheEntry& v) {
  j["valid"] = v.valid; 
  j["signedInventoryJwt"] = v.signedInventoryJwt; 
  j["expirationMS"] = v.expirationMS; 
  }
  void from_json(const json& j, LolInventoryCacheEntry& v) {
  v.valid = j.at("valid").get<bool>(); 
  v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>(); 
  v.expirationMS = j.at("expirationMS").get<uint64_t>(); 
  }
}