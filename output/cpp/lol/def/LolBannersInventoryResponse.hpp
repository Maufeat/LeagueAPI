#pragma once
#include "../base_def.hpp" 
#include "LolBannersInventoryItemsByType.hpp"
namespace lol {
  struct LolBannersInventoryResponse { 
    LolBannersInventoryItemsByType items; 
  };
  inline void to_json(json& j, const LolBannersInventoryResponse& v) {
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolBannersInventoryResponse& v) {
    v.items = j.at("items").get<LolBannersInventoryItemsByType>(); 
  }
}