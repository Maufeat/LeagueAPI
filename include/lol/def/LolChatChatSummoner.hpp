#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatChatSummoner { 
    uint32_t summonerLevel;
    std::string displayName;
    int32_t profileIconId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolChatChatSummoner& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["displayName"] = v.displayName; 
    j["profileIconId"] = v.profileIconId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolChatChatSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}