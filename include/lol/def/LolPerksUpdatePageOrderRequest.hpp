#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksUpdatePageOrderRequest { 
    int32_t targetPageId;
    int32_t destinationPageId;
    int32_t offset; 
  };
  inline void to_json(json& j, const LolPerksUpdatePageOrderRequest& v) {
    j["targetPageId"] = v.targetPageId; 
    j["destinationPageId"] = v.destinationPageId; 
    j["offset"] = v.offset; 
  }
  inline void from_json(const json& j, LolPerksUpdatePageOrderRequest& v) {
    v.targetPageId = j.at("targetPageId").get<int32_t>(); 
    v.destinationPageId = j.at("destinationPageId").get<int32_t>(); 
    v.offset = j.at("offset").get<int32_t>(); 
  }
}