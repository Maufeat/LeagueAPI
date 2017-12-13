#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerLootDTO { 
    int64_t expiryTime;
    std::string refId;
    std::string lootName;
    int32_t count; 
  };
  void to_json(json& j, const PlayerLootDTO& v) {
    j["expiryTime"] = v.expiryTime; 
    j["refId"] = v.refId; 
    j["lootName"] = v.lootName; 
    j["count"] = v.count; 
  }
  void from_json(const json& j, PlayerLootDTO& v) {
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.refId = j.at("refId").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.count = j.at("count").get<int32_t>(); 
  }
}