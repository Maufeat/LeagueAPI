#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatQueueGameTypeConfig { 
    int64_t id;
    std::string name; 
  };
  inline void to_json(json& j, const LolChatQueueGameTypeConfig& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolChatQueueGameTypeConfig& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}