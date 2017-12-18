#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreWallet { 
    int64_t ip;
    int64_t rp; 
  };
  inline void to_json(json& j, const LolStoreWallet& v) {
    j["ip"] = v.ip; 
    j["rp"] = v.rp; 
  }
  inline void from_json(const json& j, LolStoreWallet& v) {
    v.ip = j.at("ip").get<int64_t>(); 
    v.rp = j.at("rp").get<int64_t>(); 
  }
}