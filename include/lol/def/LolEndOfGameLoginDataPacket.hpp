#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameLoginSummonerData.hpp"
#include "LolEndOfGameSimpleMessage.hpp"
namespace lol {
  struct LolEndOfGameLoginDataPacket { 
    std::string platformId;
    std::vector<LolEndOfGameSimpleMessage> simpleMessages;
    LolEndOfGameLoginSummonerData allSummonerData; 
  };
  inline void to_json(json& j, const LolEndOfGameLoginDataPacket& v) {
    j["platformId"] = v.platformId; 
    j["simpleMessages"] = v.simpleMessages; 
    j["allSummonerData"] = v.allSummonerData; 
  }
  inline void from_json(const json& j, LolEndOfGameLoginDataPacket& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage>>(); 
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData>(); 
  }
}