#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreBundledItemCost { 
    std::optional<float> discount;
    std::string costType;
    std::string currency;
    int64_t cost; 
  };
  inline void to_json(json& j, const LolStoreBundledItemCost& v) {
    if(v.discount)
      j["discount"] = *v.discount;
    j["costType"] = v.costType; 
    j["currency"] = v.currency; 
    j["cost"] = v.cost; 
  }
  inline void from_json(const json& j, LolStoreBundledItemCost& v) {
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<std::optional<float>>(); 
    v.costType = j.at("costType").get<std::string>(); 
    v.currency = j.at("currency").get<std::string>(); 
    v.cost = j.at("cost").get<int64_t>(); 
  }
}