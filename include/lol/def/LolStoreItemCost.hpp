#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreItemCost { 
    std::string currency;
    int64_t cost;
    std::optional<float> discount; 
  };
  inline void to_json(json& j, const LolStoreItemCost& v) {
    j["currency"] = v.currency; 
    j["cost"] = v.cost; 
    if(v.discount)
      j["discount"] = *v.discount;
  }
  inline void from_json(const json& j, LolStoreItemCost& v) {
    v.currency = j.at("currency").get<std::string>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<std::optional<float>>(); 
  }
}