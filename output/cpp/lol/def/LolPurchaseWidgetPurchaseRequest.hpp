#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetPurchaseItem.hpp"
namespace lol {
  struct LolPurchaseWidgetPurchaseRequest { 
    std::vector<LolPurchaseWidgetPurchaseItem> items; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseRequest& v) {
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseRequest& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
  }
}