#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace lol {
  struct LolCollectionsCollectionsSummonerBackdrop { 
    std::string backdropImage;
    std::string backdropVideo;
    uint64_t accountId;
    uint64_t summonerId;
    std::string backdropMaskColor;
    int32_t profileIconId;
    int32_t championId;
    LolCollectionsCollectionsSummonerBackdropType backdropType; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerBackdrop& v) {
    j["backdropImage"] = v.backdropImage; 
    j["backdropVideo"] = v.backdropVideo; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["backdropMaskColor"] = v.backdropMaskColor; 
    j["profileIconId"] = v.profileIconId; 
    j["championId"] = v.championId; 
    j["backdropType"] = v.backdropType; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerBackdrop& v) {
    v.backdropImage = j.at("backdropImage").get<std::string>(); 
    v.backdropVideo = j.at("backdropVideo").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType>(); 
  }
}