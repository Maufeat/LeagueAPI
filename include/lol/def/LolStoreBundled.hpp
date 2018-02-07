#pragma once
#include "../base_def.hpp" 
#include "LolStoreBundledItem.hpp"
#include "LolStoreBundledItemCost.hpp"
namespace lol {
  struct LolStoreBundled { 
    bool flexible;
    std::vector<LolStoreBundledItem> items;
    std::vector<LolStoreBundledItemCost> minimumPrices; 
  };
  inline void to_json(json& j, const LolStoreBundled& v) {
    j["flexible"] = v.flexible; 
    j["items"] = v.items; 
    j["minimumPrices"] = v.minimumPrices; 
  }
  inline void from_json(const json& j, LolStoreBundled& v) {
    v.flexible = j.at("flexible").get<bool>(); 
    v.items = j.at("items").get<std::vector<LolStoreBundledItem>>(); 
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>(); 
  }
}