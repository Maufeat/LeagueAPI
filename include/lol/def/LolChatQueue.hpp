#pragma once
#include "../base_def.hpp" 
#include "LolChatQueueGameTypeConfig.hpp"
namespace lol {
  struct LolChatQueue { 
    std::string type;
    int32_t id;
    LolChatQueueGameTypeConfig gameTypeConfig;
    std::string gameMode; 
  };
  inline void to_json(json& j, const LolChatQueue& v) {
    j["type"] = v.type; 
    j["id"] = v.id; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["gameMode"] = v.gameMode; 
  }
  inline void from_json(const json& j, LolChatQueue& v) {
    v.type = j.at("type").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
}