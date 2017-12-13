#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootPlayerLootNotification { 
    int32_t count;
    std::string id;
    bool acknowledged; 
  };
  void to_json(json& j, const LolLootPlayerLootNotification& v) {
  j["count"] = v.count; 
  j["id"] = v.id; 
  j["acknowledged"] = v.acknowledged; 
  }
  void from_json(const json& j, LolLootPlayerLootNotification& v) {
  v.count = j.at("count").get<int32_t>(); 
  v.id = j.at("id").get<std::string>(); 
  v.acknowledged = j.at("acknowledged").get<bool>(); 
  }
}