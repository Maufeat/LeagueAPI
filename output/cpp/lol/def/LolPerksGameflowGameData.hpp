#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksQueue.hpp>
namespace lol {
  struct LolPerksGameflowGameData { 
    bool isCustomGame;
    LolPerksQueue queue; 
  };
  inline void to_json(json& j, const LolPerksGameflowGameData& v) {
    j["isCustomGame"] = v.isCustomGame; 
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolPerksGameflowGameData& v) {
    v.isCustomGame = j.at("isCustomGame").get<bool>(); 
    v.queue = j.at("queue").get<LolPerksQueue>(); 
  }
}