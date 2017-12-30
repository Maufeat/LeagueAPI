#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreItemCost { 
    std::optional<float> discount;
    int64_t cost;
    std::string currency; 
  };
  inline void to_json(json& j, const LolStoreItemCost& v) {
    if(v.discount)
      j["discount"] = *v.discount;
    j["cost"] = v.cost; 
    j["currency"] = v.currency; 
  }
  inline void from_json(const json& j, LolStoreItemCost& v) {
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<std::optional<float>>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    v.currency = j.at("currency").get<std::string>(); 
  }
}