#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsSummonerData.hpp>
namespace lol {
  struct LolCollectionsCollectionLoginDataPacket { 
    LolCollectionsSummonerData allSummonerData; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolCollectionsSummonerData>(); 
  }
}