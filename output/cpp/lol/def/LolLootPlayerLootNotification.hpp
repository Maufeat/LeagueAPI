#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootPlayerLootNotification { 
    bool acknowledged;
    int32_t count;
    std::string id; 
  };
  void to_json(json& j, const LolLootPlayerLootNotification& v) {
    j["acknowledged"] = v.acknowledged; 
    j["count"] = v.count; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolLootPlayerLootNotification& v) {
    v.acknowledged = j.at("acknowledged").get<bool>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}