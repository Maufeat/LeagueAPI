#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesSimpleMessage.hpp"
namespace lol {
  struct LolLeaguesLeaguesLoginDataPacket { 
    std::vector<LolLeaguesSimpleMessage> simpleMessages; 
  };
  inline void to_json(json& j, const LolLeaguesLeaguesLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages; 
  }
  inline void from_json(const json& j, LolLeaguesLeaguesLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLeaguesSimpleMessage>>(); 
  }
}