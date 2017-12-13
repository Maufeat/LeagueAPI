#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersWallet { 
    int64_t rp; 
  };
  void to_json(json& j, const LolPersonalizedOffersWallet& v) {
  j["rp"] = v.rp; 
  }
  void from_json(const json& j, LolPersonalizedOffersWallet& v) {
  v.rp = j.at("rp").get<int64_t>(); 
  }
}