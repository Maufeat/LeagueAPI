#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LootNameRefId { 
    std::string refId;
    std::string lootName; 
  };
  inline void to_json(json& j, const LootNameRefId& v) {
    j["refId"] = v.refId; 
    j["lootName"] = v.lootName; 
  }
  inline void from_json(const json& j, LootNameRefId& v) {
    v.refId = j.at("refId").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
  }
}