#pragma once
#include "../base_def.hpp" 
#include "LolLootLoginSimpleMessage.hpp"
#include "LolLootLoginAllSummonerData.hpp"
namespace lol {
  struct LolLootLoginDataPacket { 
    std::vector<LolLootLoginSimpleMessage> simpleMessages;
    LolLootLoginAllSummonerData allSummonerData; 
  };
  inline void to_json(json& j, const LolLootLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages; 
    j["allSummonerData"] = v.allSummonerData; 
  }
  inline void from_json(const json& j, LolLootLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLootLoginSimpleMessage>>(); 
    v.allSummonerData = j.at("allSummonerData").get<LolLootLoginAllSummonerData>(); 
  }
}