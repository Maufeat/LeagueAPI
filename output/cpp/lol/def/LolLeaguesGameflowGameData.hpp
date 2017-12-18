#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesQueue.hpp>
namespace lol {
  struct LolLeaguesGameflowGameData { 
    LolLeaguesQueue queue; 
  };
  inline void to_json(json& j, const LolLeaguesGameflowGameData& v) {
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolLeaguesGameflowGameData& v) {
    v.queue = j.at("queue").get<LolLeaguesQueue>(); 
  }
}