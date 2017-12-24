#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolItemSetsItemSetItem { 
    std::string id;
    uint16_t count; 
  };
  inline void to_json(json& j, const LolItemSetsItemSetItem& v) {
    j["id"] = v.id; 
    j["count"] = v.count; 
  }
  inline void from_json(const json& j, LolItemSetsItemSetItem& v) {
    v.id = j.at("id").get<std::string>(); 
    v.count = j.at("count").get<uint16_t>(); 
  }
}