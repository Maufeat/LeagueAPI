#pragma once
#include "../base_def.hpp" 
#include "LolStoreItemCost.hpp"
namespace lol {
  struct LolStoreSale { 
    std::string endDate;
    std::vector<LolStoreItemCost> prices;
    std::string startDate; 
  };
  inline void to_json(json& j, const LolStoreSale& v) {
    j["endDate"] = v.endDate; 
    j["prices"] = v.prices; 
    j["startDate"] = v.startDate; 
  }
  inline void from_json(const json& j, LolStoreSale& v) {
    v.endDate = j.at("endDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>(); 
    v.startDate = j.at("startDate").get<std::string>(); 
  }
}