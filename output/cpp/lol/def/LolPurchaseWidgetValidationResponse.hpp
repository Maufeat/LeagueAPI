#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetValidationResponseItem.hpp>
namespace lol {
  struct LolPurchaseWidgetValidationResponse { 
    std::vector<LolPurchaseWidgetValidationResponseItem> items;
    bool valid; 
  };
  void to_json(json& j, const LolPurchaseWidgetValidationResponse& v) {
  j["items"] = v.items; 
  j["valid"] = v.valid; 
  }
  void from_json(const json& j, LolPurchaseWidgetValidationResponse& v) {
  v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationResponseItem>>(); 
  v.valid = j.at("valid").get<bool>(); 
  }
}