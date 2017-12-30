#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLoginSessionWallet { 
    int64_t rp;
    int64_t ip; 
  };
  inline void to_json(json& j, const LolLoginLoginSessionWallet& v) {
    j["rp"] = v.rp; 
    j["ip"] = v.ip; 
  }
  inline void from_json(const json& j, LolLoginLoginSessionWallet& v) {
    v.rp = j.at("rp").get<int64_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
  }
}