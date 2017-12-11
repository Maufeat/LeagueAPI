#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersWallet { /**/ 
    int64_t rp;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersWallet& v) { 
    j["rp"] = v.rp;
  }
  static void from_json(const json& j, LolPersonalizedOffersWallet& v) { 
    v.rp = j.at("rp").get<int64_t>(); 
  }
} 