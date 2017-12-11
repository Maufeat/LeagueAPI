#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsSummonerData.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionLoginDataPacket { /**/ 
    LolCollectionsSummonerData allSummonerData;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionLoginDataPacket& v) { 
    j["allSummonerData"] = v.allSummonerData;
  }
  static void from_json(const json& j, LolCollectionsCollectionLoginDataPacket& v) { 
    v.allSummonerData = j.at("allSummonerData").get<LolCollectionsSummonerData>(); 
  }
} 