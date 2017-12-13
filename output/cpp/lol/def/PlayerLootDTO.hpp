#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerLootDTO { 
    std::string refId;
    int32_t count;
    int64_t expiryTime;
    std::string lootName; 
  };
  void to_json(json& j, const PlayerLootDTO& v) {
  j["refId"] = v.refId; 
  j["count"] = v.count; 
  j["expiryTime"] = v.expiryTime; 
  j["lootName"] = v.lootName; 
  }
  void from_json(const json& j, PlayerLootDTO& v) {
  v.refId = j.at("refId").get<std::string>(); 
  v.count = j.at("count").get<int32_t>(); 
  v.expiryTime = j.at("expiryTime").get<int64_t>(); 
  v.lootName = j.at("lootName").get<std::string>(); 
  }
}