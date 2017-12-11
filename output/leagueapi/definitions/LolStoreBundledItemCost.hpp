#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreBundledItemCost { /**/ 
    std::string costType;/**/
    std::optional<float> discount;/**/
    int64_t cost;/**/
    std::string currency;/**/
  };
  static void to_json(json& j, const LolStoreBundledItemCost& v) { 
    j["costType"] = v.costType;
    j["discount"] = v.discount;
    j["cost"] = v.cost;
    j["currency"] = v.currency;
  }
  static void from_json(const json& j, LolStoreBundledItemCost& v) { 
    v.costType = j.at("costType").get<std::string>(); 
    v.discount = j.at("discount").get<std::optional<float>>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    v.currency = j.at("currency").get<std::string>(); 
  }
} 