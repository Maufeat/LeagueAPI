#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPurchaseWidgetBalance.hpp>"

namespace leagueapi {
  struct LolPurchaseWidgetWallet { /**/ 
    std::vector<LolPurchaseWidgetBalance> balances;/**/
    uint64_t accountId;/**/
    int32_t version;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetWallet& v) { 
    j["balances"] = v.balances;
    j["accountId"] = v.accountId;
    j["version"] = v.version;
  }
  static void from_json(const json& j, LolPurchaseWidgetWallet& v) { 
    v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.version = j.at("version").get<int32_t>(); 
  }
} 