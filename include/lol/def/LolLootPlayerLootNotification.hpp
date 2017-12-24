#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootPlayerLootNotification { 
    std::string id;
    bool acknowledged;
    int32_t count; 
  };
  inline void to_json(json& j, const LolLootPlayerLootNotification& v) {
    j["id"] = v.id; 
    j["acknowledged"] = v.acknowledged; 
    j["count"] = v.count; 
  }
  inline void from_json(const json& j, LolLootPlayerLootNotification& v) {
    v.id = j.at("id").get<std::string>(); 
    v.acknowledged = j.at("acknowledged").get<bool>(); 
    v.count = j.at("count").get<int32_t>(); 
  }
}