#pragma once
#include "../base_def.hpp" 
#include "LolStoreBundledItem.hpp"
#include "LolStoreBundledItemCost.hpp"
namespace lol {
  struct LolStoreBundled { 
    std::vector<LolStoreBundledItemCost> minimumPrices;
    bool flexible;
    std::vector<LolStoreBundledItem> items; 
  };
  inline void to_json(json& j, const LolStoreBundled& v) {
    j["minimumPrices"] = v.minimumPrices; 
    j["flexible"] = v.flexible; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolStoreBundled& v) {
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>(); 
    v.flexible = j.at("flexible").get<bool>(); 
    v.items = j.at("items").get<std::vector<LolStoreBundledItem>>(); 
  }
}