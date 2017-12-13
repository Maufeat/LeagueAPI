#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreItemCost.hpp>
namespace lol {
  struct LolStoreSale { 
    std::string startDate;
    std::vector<LolStoreItemCost> prices;
    std::string endDate; 
  };
  void to_json(json& j, const LolStoreSale& v) {
    j["startDate"] = v.startDate; 
    j["prices"] = v.prices; 
    j["endDate"] = v.endDate; 
  }
  void from_json(const json& j, LolStoreSale& v) {
    v.startDate = j.at("startDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
  }
}