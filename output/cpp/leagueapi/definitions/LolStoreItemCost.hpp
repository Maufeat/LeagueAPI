#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreItemCost { /**/ 
    std::optional<float> discount;/**/
    int64_t cost;/**/
    std::string currency;/**/
  };
  static void to_json(json& j, const LolStoreItemCost& v) { 
    j["discount"] = v.discount;
    j["cost"] = v.cost;
    j["currency"] = v.currency;
  }
  static void from_json(const json& j, LolStoreItemCost& v) { 
    v.discount = j.at("discount").get<std::optional<float>>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    v.currency = j.at("currency").get<std::string>(); 
  }
} 