#pragma once
#include "../base_def.hpp" 
#include "LolStoreItemCost.hpp"
namespace lol {
  struct LolStoreSale { 
    std::string startDate;
    std::vector<LolStoreItemCost> prices;
    std::string endDate; 
  };
  inline void to_json(json& j, const LolStoreSale& v) {
    j["startDate"] = v.startDate; 
    j["prices"] = v.prices; 
    j["endDate"] = v.endDate; 
  }
  inline void from_json(const json& j, LolStoreSale& v) {
    v.startDate = j.at("startDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
  }
}