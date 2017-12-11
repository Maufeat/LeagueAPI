#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolStoreBundledItemCost.hpp>
#include <leagueapi/definitions/LolStoreBundledItem.hpp>

namespace leagueapi {
  struct LolStoreBundled { /**/ 
    std::vector<LolStoreBundledItem> items;/**/
    std::vector<LolStoreBundledItemCost> minimumPrices;/**/
    bool flexible;/**/
  };
  static void to_json(json& j, const LolStoreBundled& v) { 
    j["items"] = v.items;
    j["minimumPrices"] = v.minimumPrices;
    j["flexible"] = v.flexible;
  }
  static void from_json(const json& j, LolStoreBundled& v) { 
    v.items = j.at("items").get<std::vector<LolStoreBundledItem>>(); 
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>(); 
    v.flexible = j.at("flexible").get<bool>(); 
  }
} 