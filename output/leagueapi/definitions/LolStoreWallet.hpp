#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreWallet { /**/ 
    int64_t ip;/**/
    int64_t rp;/**/
  };
  static void to_json(json& j, const LolStoreWallet& v) { 
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }
  static void from_json(const json& j, LolStoreWallet& v) { 
    v.ip = j.at("ip").get<int64_t>(); 
    v.rp = j.at("rp").get<int64_t>(); 
  }
} 