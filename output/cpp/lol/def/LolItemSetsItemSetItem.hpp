#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolItemSetsItemSetItem { 
    uint16_t count;
    std::string id; 
  };
  void to_json(json& j, const LolItemSetsItemSetItem& v) {
    j["count"] = v.count; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolItemSetsItemSetItem& v) {
    v.count = j.at("count").get<uint16_t>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}