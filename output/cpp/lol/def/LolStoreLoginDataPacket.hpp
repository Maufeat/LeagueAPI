#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreAllSummonerData.hpp>
#include <lol/def/LolStoreSimpleDialogMessage.hpp>
namespace lol {
  struct LolStoreLoginDataPacket { 
    LolStoreAllSummonerData allSummonerData;
    std::vector<LolStoreSimpleDialogMessage> simpleMessages; 
  };
  void to_json(json& j, const LolStoreLoginDataPacket& v) {
  j["allSummonerData"] = v.allSummonerData; 
  j["simpleMessages"] = v.simpleMessages; 
  }
  void from_json(const json& j, LolStoreLoginDataPacket& v) {
  v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData>(); 
  v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage>>(); 
  }
}