#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreServiceBalance.hpp>
namespace lol {
  struct LolStoreServiceWallet { 
    std::vector<LolStoreServiceBalance> balances;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolStoreServiceWallet& v) {
    j["balances"] = v.balances; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolStoreServiceWallet& v) {
    v.balances = j.at("balances").get<std::vector<LolStoreServiceBalance>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}