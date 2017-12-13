#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetPurchaseItem.hpp>
namespace lol {
  struct LolPurchaseWidgetPurchaseRequest { 
    std::vector<LolPurchaseWidgetPurchaseItem> items; 
  };
  void to_json(json& j, const LolPurchaseWidgetPurchaseRequest& v) {
  j["items"] = v.items; 
  }
  void from_json(const json& j, LolPurchaseWidgetPurchaseRequest& v) {
  v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
  }
}