#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolBannersInventoryItemsByType.hpp>
namespace lol {
  struct LolBannersInventoryResponse { 
    LolBannersInventoryItemsByType items; 
  };
  void to_json(json& j, const LolBannersInventoryResponse& v) {
    j["items"] = v.items; 
  }
  void from_json(const json& j, LolBannersInventoryResponse& v) {
    v.items = j.at("items").get<LolBannersInventoryItemsByType>(); 
  }
}