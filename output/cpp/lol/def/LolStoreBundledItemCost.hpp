#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreBundledItemCost { 
    std::optional<float> discount;
    std::string costType;
    std::string currency;
    int64_t cost; 
  };
  void to_json(json& j, const LolStoreBundledItemCost& v) {
  j["discount"] = v.discount; 
  j["costType"] = v.costType; 
  j["currency"] = v.currency; 
  j["cost"] = v.cost; 
  }
  void from_json(const json& j, LolStoreBundledItemCost& v) {
  v.discount = j.at("discount").get<std::optional<float>>(); 
  v.costType = j.at("costType").get<std::string>(); 
  v.currency = j.at("currency").get<std::string>(); 
  v.cost = j.at("cost").get<int64_t>(); 
  }
}