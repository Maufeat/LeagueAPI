#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetValidationResponseItem.hpp>
namespace lol {
  struct LolPurchaseWidgetValidationResponse { 
    bool valid;
    std::vector<LolPurchaseWidgetValidationResponseItem> items; 
  };
  void to_json(json& j, const LolPurchaseWidgetValidationResponse& v) {
    j["valid"] = v.valid; 
    j["items"] = v.items; 
  }
  void from_json(const json& j, LolPurchaseWidgetValidationResponse& v) {
    v.valid = j.at("valid").get<bool>(); 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationResponseItem>>(); 
  }
}