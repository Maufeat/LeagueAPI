#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootPlayerLootNotification { 
    std::string id;
    int32_t count;
    bool acknowledged; 
  };
  inline void to_json(json& j, const LolLootPlayerLootNotification& v) {
    j["id"] = v.id; 
    j["count"] = v.count; 
    j["acknowledged"] = v.acknowledged; 
  }
  inline void from_json(const json& j, LolLootPlayerLootNotification& v) {
    v.id = j.at("id").get<std::string>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.acknowledged = j.at("acknowledged").get<bool>(); 
  }
}