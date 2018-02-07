#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace lol {
  struct LolCollectionsCollectionsSummonerBackdrop { 
    uint64_t summonerId;
    uint64_t accountId;
    int32_t profileIconId;
    int32_t championId;
    LolCollectionsCollectionsSummonerBackdropType backdropType;
    std::string backdropImage;
    std::string backdropVideo;
    std::string backdropMaskColor; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerBackdrop& v) {
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["profileIconId"] = v.profileIconId; 
    j["championId"] = v.championId; 
    j["backdropType"] = v.backdropType; 
    j["backdropImage"] = v.backdropImage; 
    j["backdropVideo"] = v.backdropVideo; 
    j["backdropMaskColor"] = v.backdropMaskColor; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerBackdrop& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType>(); 
    v.backdropImage = j.at("backdropImage").get<std::string>(); 
    v.backdropVideo = j.at("backdropVideo").get<std::string>(); 
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>(); 
  }
}