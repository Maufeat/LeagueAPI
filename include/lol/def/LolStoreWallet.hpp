#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreWallet { 
    int64_t rp;
    int64_t ip; 
  };
  inline void to_json(json& j, const LolStoreWallet& v) {
    j["rp"] = v.rp; 
    j["ip"] = v.ip; 
  }
  inline void from_json(const json& j, LolStoreWallet& v) {
    v.rp = j.at("rp").get<int64_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
  }
}