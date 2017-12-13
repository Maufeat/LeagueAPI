#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreBundledItem.hpp>
#include <lol/def/LolStoreBundledItemCost.hpp>
namespace lol {
  struct LolStoreBundled { 
    std::vector<LolStoreBundledItem> items;
    std::vector<LolStoreBundledItemCost> minimumPrices;
    bool flexible; 
  };
  void to_json(json& j, const LolStoreBundled& v) {
  j["items"] = v.items; 
  j["minimumPrices"] = v.minimumPrices; 
  j["flexible"] = v.flexible; 
  }
  void from_json(const json& j, LolStoreBundled& v) {
  v.items = j.at("items").get<std::vector<LolStoreBundledItem>>(); 
  v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>(); 
  v.flexible = j.at("flexible").get<bool>(); 
  }
}