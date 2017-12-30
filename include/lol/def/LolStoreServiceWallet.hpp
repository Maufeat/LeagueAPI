#pragma once
#include "../base_def.hpp" 
#include "LolStoreServiceBalance.hpp"
namespace lol {
  struct LolStoreServiceWallet { 
    uint64_t accountId;
    std::vector<LolStoreServiceBalance> balances; 
  };
  inline void to_json(json& j, const LolStoreServiceWallet& v) {
    j["accountId"] = v.accountId; 
    j["balances"] = v.balances; 
  }
  inline void from_json(const json& j, LolStoreServiceWallet& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.balances = j.at("balances").get<std::vector<LolStoreServiceBalance>>(); 
  }
}