#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootCurrencyConfiguration { 
    std::vector<std::string> currenciesUsingCapWallets; 
  };
  inline void to_json(json& j, const LolLootCurrencyConfiguration& v) {
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets; 
  }
  inline void from_json(const json& j, LolLootCurrencyConfiguration& v) {
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>(); 
  }
}