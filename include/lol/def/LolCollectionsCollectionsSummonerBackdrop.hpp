#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace lol {
  struct LolCollectionsCollectionsSummonerBackdrop { 
    uint64_t summonerId;
    LolCollectionsCollectionsSummonerBackdropType backdropType;
    int32_t championId;
    uint64_t accountId;
    std::string backdropImage;
    std::string backdropVideo;
    int32_t profileIconId;
    std::string backdropMaskColor; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerBackdrop& v) {
    j["summonerId"] = v.summonerId; 
    j["backdropType"] = v.backdropType; 
    j["championId"] = v.championId; 
    j["accountId"] = v.accountId; 
    j["backdropImage"] = v.backdropImage; 
    j["backdropVideo"] = v.backdropVideo; 
    j["profileIconId"] = v.profileIconId; 
    j["backdropMaskColor"] = v.backdropMaskColor; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerBackdrop& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.backdropImage = j.at("backdropImage").get<std::string>(); 
    v.backdropVideo = j.at("backdropVideo").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>(); 
  }
}