#pragma once
#include "../base_def.hpp" 
#include "LolStoreAllSummonerData.hpp"
#include "LolStoreSimpleDialogMessage.hpp"
namespace lol {
  struct LolStoreLoginDataPacket { 
    std::vector<LolStoreSimpleDialogMessage> simpleMessages;
    LolStoreAllSummonerData allSummonerData; 
  };
  inline void to_json(json& j, const LolStoreLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages; 
    j["allSummonerData"] = v.allSummonerData; 
  }
  inline void from_json(const json& j, LolStoreLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage>>(); 
    v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData>(); 
  }
}