#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolEndOfGameSimpleMessage.hpp>"
#include "<leagueapi/definitions/LolEndOfGameLoginSummonerData.hpp>"

namespace leagueapi {
  struct LolEndOfGameLoginDataPacket { /**/ 
    LolEndOfGameLoginSummonerData allSummonerData;/**/
    std::vector<LolEndOfGameSimpleMessage> simpleMessages;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const LolEndOfGameLoginDataPacket& v) { 
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, LolEndOfGameLoginDataPacket& v) { 
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData>(); 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 