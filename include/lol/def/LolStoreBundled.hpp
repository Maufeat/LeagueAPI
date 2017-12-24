#pragma once
#include "../base_def.hpp" 
#include "LolStoreBundledItem.hpp"
#include "LolStoreBundledItemCost.hpp"
namespace lol {
  struct LolStoreBundled { 
    std::vector<LolStoreBundledItem> items;
    bool flexible;
    std::vector<LolStoreBundledItemCost> minimumPrices; 
  };
  inline void to_json(json& j, const LolStoreBundled& v) {
    j["items"] = v.items; 
    j["flexible"] = v.flexible; 
    j["minimumPrices"] = v.minimumPrices; 
  }
  inline void from_json(const json& j, LolStoreBundled& v) {
    v.items = j.at("items").get<std::vector<LolStoreBundledItem>>(); 
    v.flexible = j.at("flexible").get<bool>(); 
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>(); 
  }
}