#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreItemCost { 
    std::optional<float> discount;
    std::string currency;
    int64_t cost; 
  };
  void to_json(json& j, const LolStoreItemCost& v) {
    if(v.discount)
      j["discount"] = *v.discount;
    j["currency"] = v.currency; 
    j["cost"] = v.cost; 
  }
  void from_json(const json& j, LolStoreItemCost& v) {
    if(auto it = j.find("discount"); it != j.end() && !it->is_null())
      v.discount = it->get<std::optional<float>>(); 
    v.currency = j.at("currency").get<std::string>(); 
    v.cost = j.at("cost").get<int64_t>(); 
  }
}