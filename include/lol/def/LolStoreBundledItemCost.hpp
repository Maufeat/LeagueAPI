#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreBundledItemCost { 
    std::string currency;
    int64_t cost;
    std::optional<float> discount;
    std::string costType; 
  };
  inline void to_json(json& j, const LolStoreBundledItemCost& v) {
    j["currency"] = v.currency; 
    j["cost"] = v.cost; 
    if(v.discount)
      j["discount"] = *v.discount;
    j["costType"] = v.costType; 
  }
  inline void from_json(const json& j, LolStoreBundledItemCost& v) {
    v.currency = j.at("currency").get<std::string>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<std::optional<float>>(); 
    v.costType = j.at("costType").get<std::string>(); 
  }
}