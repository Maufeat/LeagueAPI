#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLootLoginSimpleMessage.hpp>
#include <leagueapi/definitions/LolLootLoginAllSummonerData.hpp>

namespace leagueapi {
  struct LolLootLoginDataPacket { /**/ 
    LolLootLoginAllSummonerData allSummonerData;/**/
    std::vector<LolLootLoginSimpleMessage> simpleMessages;/**/
  };
  static void to_json(json& j, const LolLootLoginDataPacket& v) { 
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
  }
  static void from_json(const json& j, LolLootLoginDataPacket& v) { 
    v.allSummonerData = j.at("allSummonerData").get<LolLootLoginAllSummonerData>(); 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLootLoginSimpleMessage>>(); 
  }
} 