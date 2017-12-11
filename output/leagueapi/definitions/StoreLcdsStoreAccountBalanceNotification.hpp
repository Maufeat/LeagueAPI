#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct StoreLcdsStoreAccountBalanceNotification { /**/ 
    int64_t ip;/**/
    int64_t rp;/**/
  };
  static void to_json(json& j, const StoreLcdsStoreAccountBalanceNotification& v) { 
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }
  static void from_json(const json& j, StoreLcdsStoreAccountBalanceNotification& v) { 
    v.ip = j.at("ip").get<int64_t>(); 
    v.rp = j.at("rp").get<int64_t>(); 
  }
} 