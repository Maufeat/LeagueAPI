#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolStoreSimpleDialogMessage.hpp>"
#include "<leagueapi/definitions/LolStoreAllSummonerData.hpp>"

namespace leagueapi {
  struct LolStoreLoginDataPacket { /**/ 
    LolStoreAllSummonerData allSummonerData;/**/
    std::vector<LolStoreSimpleDialogMessage> simpleMessages;/**/
  };
  static void to_json(json& j, const LolStoreLoginDataPacket& v) { 
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
  }
  static void from_json(const json& j, LolStoreLoginDataPacket& v) { 
    v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData>(); 
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage>>(); 
  }
} 