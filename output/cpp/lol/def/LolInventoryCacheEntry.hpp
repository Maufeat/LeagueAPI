#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryCacheEntry { 
    std::string signedInventoryJwt;
    bool valid;
    uint64_t expirationMS; 
  };
  void to_json(json& j, const LolInventoryCacheEntry& v) {
  j["signedInventoryJwt"] = v.signedInventoryJwt; 
  j["valid"] = v.valid; 
  j["expirationMS"] = v.expirationMS; 
  }
  void from_json(const json& j, LolInventoryCacheEntry& v) {
  v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>(); 
  v.valid = j.at("valid").get<bool>(); 
  v.expirationMS = j.at("expirationMS").get<uint64_t>(); 
  }
}