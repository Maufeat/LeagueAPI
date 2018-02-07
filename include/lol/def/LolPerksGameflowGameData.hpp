#pragma once
#include "../base_def.hpp" 
#include "LolPerksQueue.hpp"
namespace lol {
  struct LolPerksGameflowGameData { 
    LolPerksQueue queue;
    bool isCustomGame;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolPerksGameflowGameData& v) {
    j["queue"] = v.queue; 
    j["isCustomGame"] = v.isCustomGame; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolPerksGameflowGameData& v) {
    v.queue = j.at("queue").get<LolPerksQueue>(); 
    v.isCustomGame = j.at("isCustomGame").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}