#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreBundledItemCost { 
    std::optional<float> discount;
    int64_t cost;
    std::string currency;
    std::string costType; 
  };
  inline void to_json(json& j, const LolStoreBundledItemCost& v) {
    if(v.discount)
      j["discount"] = *v.discount;
    j["cost"] = v.cost; 
    j["currency"] = v.currency; 
    j["costType"] = v.costType; 
  }
  inline void from_json(const json& j, LolStoreBundledItemCost& v) {
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<std::optional<float>>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    v.currency = j.at("currency").get<std::string>(); 
    v.costType = j.at("costType").get<std::string>(); 
  }
}