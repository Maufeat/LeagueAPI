#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEndOfGameLoginSummonerData.hpp>
#include <lol/def/LolEndOfGameSimpleMessage.hpp>
namespace lol {
  struct LolEndOfGameLoginDataPacket { 
    LolEndOfGameLoginSummonerData allSummonerData;
    std::vector<LolEndOfGameSimpleMessage> simpleMessages;
    std::string platformId; 
  };
  void to_json(json& j, const LolEndOfGameLoginDataPacket& v) {
  j["allSummonerData"] = v.allSummonerData; 
  j["simpleMessages"] = v.simpleMessages; 
  j["platformId"] = v.platformId; 
  }
  void from_json(const json& j, LolEndOfGameLoginDataPacket& v) {
  v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData>(); 
  v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage>>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  }
}