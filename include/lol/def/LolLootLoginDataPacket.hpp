#pragma once
#include "../base_def.hpp" 
#include "LolLootLoginAllSummonerData.hpp"
#include "LolLootLoginSimpleMessage.hpp"
namespace lol {
  struct LolLootLoginDataPacket { 
    LolLootLoginAllSummonerData allSummonerData;
    std::vector<LolLootLoginSimpleMessage> simpleMessages; 
  };
  inline void to_json(json& j, const LolLootLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData; 
    j["simpleMessages"] = v.simpleMessages; 
  }
  inline void from_json(const json& j, LolLootLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolLootLoginAllSummonerData>(); 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLootLoginSimpleMessage>>(); 
  }
}