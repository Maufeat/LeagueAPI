#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetValidationResponseItem.hpp"
namespace lol {
  struct LolPurchaseWidgetValidationResponse { 
    bool valid;
    std::vector<LolPurchaseWidgetValidationResponseItem> items; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetValidationResponse& v) {
    j["valid"] = v.valid; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetValidationResponse& v) {
    v.valid = j.at("valid").get<bool>(); 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationResponseItem>>(); 
  }
}