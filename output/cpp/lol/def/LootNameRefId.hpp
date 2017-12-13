#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LootNameRefId { 
    std::string refId;
    std::string lootName; 
  };
  void to_json(json& j, const LootNameRefId& v) {
  j["refId"] = v.refId; 
  j["lootName"] = v.lootName; 
  }
  void from_json(const json& j, LootNameRefId& v) {
  v.refId = j.at("refId").get<std::string>(); 
  v.lootName = j.at("lootName").get<std::string>(); 
  }
}