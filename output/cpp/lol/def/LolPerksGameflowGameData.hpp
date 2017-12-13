#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksQueue.hpp>
namespace lol {
  struct LolPerksGameflowGameData { 
    LolPerksQueue queue;
    bool isCustomGame; 
  };
  void to_json(json& j, const LolPerksGameflowGameData& v) {
  j["queue"] = v.queue; 
  j["isCustomGame"] = v.isCustomGame; 
  }
  void from_json(const json& j, LolPerksGameflowGameData& v) {
  v.queue = j.at("queue").get<LolPerksQueue>(); 
  v.isCustomGame = j.at("isCustomGame").get<bool>(); 
  }
}