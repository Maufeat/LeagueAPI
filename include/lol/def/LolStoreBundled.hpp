#pragma once
#include "../base_def.hpp" 
#include "LolStoreBundledItemCost.hpp"
#include "LolStoreBundledItem.hpp"
namespace lol {
  struct LolStoreBundled { 
    bool flexible;
    std::vector<LolStoreBundledItemCost> minimumPrices;
    std::vector<LolStoreBundledItem> items; 
  };
  inline void to_json(json& j, const LolStoreBundled& v) {
    j["flexible"] = v.flexible; 
    j["minimumPrices"] = v.minimumPrices; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolStoreBundled& v) {
    v.flexible = j.at("flexible").get<bool>(); 
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>(); 
    v.items = j.at("items").get<std::vector<LolStoreBundledItem>>(); 
  }
}