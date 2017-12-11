#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolCollectionsCollectionsSummonerBackdropType.hpp>"

namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop { /**/ 
    uint64_t summonerId;/**/
    LolCollectionsCollectionsSummonerBackdropType backdropType;/**/
    int32_t profileIconId;/**/
    uint64_t accountId;/**/
    std::string backdropMaskColor;/**/
    std::string backdropVideo;/**/
    std::string backdropImage;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsSummonerBackdrop& v) { 
    j["summonerId"] = v.summonerId;
    j["backdropType"] = v.backdropType;
    j["profileIconId"] = v.profileIconId;
    j["accountId"] = v.accountId;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["backdropVideo"] = v.backdropVideo;
    j["backdropImage"] = v.backdropImage;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolCollectionsCollectionsSummonerBackdrop& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>(); 
    v.backdropVideo = j.at("backdropVideo").get<std::string>(); 
    v.backdropImage = j.at("backdropImage").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 