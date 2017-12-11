#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreServiceBalance { /**/ 
    int64_t amount;/**/
    std::string currency;/**/
  };
  static void to_json(json& j, const LolStoreServiceBalance& v) { 
    j["amount"] = v.amount;
    j["currency"] = v.currency;
  }
  static void from_json(const json& j, LolStoreServiceBalance& v) { 
    v.amount = j.at("amount").get<int64_t>(); 
    v.currency = j.at("currency").get<std::string>(); 
  }
} 