#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesSimpleMessage.hpp>
namespace lol {
  struct LolLeaguesLeaguesLoginDataPacket { 
    std::vector<LolLeaguesSimpleMessage> simpleMessages; 
  };
  void to_json(json& j, const LolLeaguesLeaguesLoginDataPacket& v) {
  j["simpleMessages"] = v.simpleMessages; 
  }
  void from_json(const json& j, LolLeaguesLeaguesLoginDataPacket& v) {
  v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLeaguesSimpleMessage>>(); 
  }
}