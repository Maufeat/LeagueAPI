#pragma once
#include "../base_def.hpp" 
#include "LolStoreSimpleDialogMessage.hpp"
#include "LolStoreAllSummonerData.hpp"
namespace lol {
  struct LolStoreLoginDataPacket { 
    LolStoreAllSummonerData allSummonerData;
    std::vector<LolStoreSimpleDialogMessage> simpleMessages; 
  };
  inline void to_json(json& j, const LolStoreLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData; 
    j["simpleMessages"] = v.simpleMessages; 
  }
  inline void from_json(const json& j, LolStoreLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData>(); 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage>>(); 
  }
}