#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootCurrencyConfiguration { /**/ 
    std::vector<std::string> currenciesUsingCapWallets;/**/
  };
  static void to_json(json& j, const LolLootCurrencyConfiguration& v) { 
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets;
  }
  static void from_json(const json& j, LolLootCurrencyConfiguration& v) { 
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>(); 
  }
} 