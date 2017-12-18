#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsSummonerBackdropType.hpp>
namespace lol {
  struct LolCollectionsCollectionsSummonerBackdrop { 
    std::string backdropMaskColor;
    std::string backdropVideo;
    std::string backdropImage;
    LolCollectionsCollectionsSummonerBackdropType backdropType;
    uint64_t summonerId;
    int32_t profileIconId;
    int32_t championId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsSummonerBackdrop& v) {
    j["backdropMaskColor"] = v.backdropMaskColor; 
    j["backdropVideo"] = v.backdropVideo; 
    j["backdropImage"] = v.backdropImage; 
    j["backdropType"] = v.backdropType; 
    j["summonerId"] = v.summonerId; 
    j["profileIconId"] = v.profileIconId; 
    j["championId"] = v.championId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsSummonerBackdrop& v) {
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>(); 
    v.backdropVideo = j.at("backdropVideo").get<std::string>(); 
    v.backdropImage = j.at("backdropImage").get<std::string>(); 
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}