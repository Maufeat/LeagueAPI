#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameSimpleMessage.hpp"
#include "LolEndOfGameLoginSummonerData.hpp"
namespace lol {
  struct LolEndOfGameLoginDataPacket { 
    LolEndOfGameLoginSummonerData allSummonerData;
    std::vector<LolEndOfGameSimpleMessage> simpleMessages;
    std::string platformId; 
  };
  inline void to_json(json& j, const LolEndOfGameLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData; 
    j["simpleMessages"] = v.simpleMessages; 
    j["platformId"] = v.platformId; 
  }
  inline void from_json(const json& j, LolEndOfGameLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData>(); 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
}