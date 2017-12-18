#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersWallet { 
    int64_t rp; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersWallet& v) {
    j["rp"] = v.rp; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersWallet& v) {
    v.rp = j.at("rp").get<int64_t>(); 
  }
}