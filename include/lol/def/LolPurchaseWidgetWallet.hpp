#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetBalance.hpp"
namespace lol {
  struct LolPurchaseWidgetWallet { 
    uint64_t accountId;
    std::vector<LolPurchaseWidgetBalance> balances;
    int32_t version; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetWallet& v) {
    j["accountId"] = v.accountId; 
    j["balances"] = v.balances; 
    j["version"] = v.version; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetWallet& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance>>(); 
    v.version = j.at("version").get<int32_t>(); 
  }
}