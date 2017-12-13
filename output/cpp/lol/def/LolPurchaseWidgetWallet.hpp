#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetBalance.hpp>
namespace lol {
  struct LolPurchaseWidgetWallet { 
    int32_t version;
    std::vector<LolPurchaseWidgetBalance> balances;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolPurchaseWidgetWallet& v) {
  j["version"] = v.version; 
  j["balances"] = v.balances; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolPurchaseWidgetWallet& v) {
  v.version = j.at("version").get<int32_t>(); 
  v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance>>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}