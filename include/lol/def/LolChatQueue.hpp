#pragma once
#include "../base_def.hpp" 
#include "LolChatQueueGameTypeConfig.hpp"
namespace lol {
  struct LolChatQueue { 
    int32_t id;
    std::string type;
    std::string gameMode;
    LolChatQueueGameTypeConfig gameTypeConfig; 
  };
  inline void to_json(json& j, const LolChatQueue& v) {
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["gameMode"] = v.gameMode; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
  }
  inline void from_json(const json& j, LolChatQueue& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig>(); 
  }
}