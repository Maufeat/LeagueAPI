#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolStoreServiceBalance.hpp>

namespace leagueapi {
  struct LolStoreServiceWallet { /**/ 
    std::vector<LolStoreServiceBalance> balances;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolStoreServiceWallet& v) { 
    j["balances"] = v.balances;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolStoreServiceWallet& v) { 
    v.balances = j.at("balances").get<std::vector<LolStoreServiceBalance>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 