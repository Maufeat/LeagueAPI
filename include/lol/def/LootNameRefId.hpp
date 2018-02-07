#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootNameRefId { 
    std::string lootName;
    std::string refId; 
  };
  inline void to_json(json& j, const LootNameRefId& v) {
    j["lootName"] = v.lootName; 
    j["refId"] = v.refId; 
  }
  inline void from_json(const json& j, LootNameRefId& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
    v.refId = j.at("refId").get<std::string>(); 
  }
}