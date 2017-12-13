#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEndOfGameLoginSummonerData.hpp>
#include <lol/def/LolEndOfGameSimpleMessage.hpp>
namespace lol {
  struct LolEndOfGameLoginDataPacket { 
    LolEndOfGameLoginSummonerData allSummonerData;
    std::string platformId;
    std::vector<LolEndOfGameSimpleMessage> simpleMessages; 
  };
  void to_json(json& j, const LolEndOfGameLoginDataPacket& v) {
  j["allSummonerData"] = v.allSummonerData; 
  j["platformId"] = v.platformId; 
  j["simpleMessages"] = v.simpleMessages; 
  }
  void from_json(const json& j, LolEndOfGameLoginDataPacket& v) {
  v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage>>(); 
  }
}