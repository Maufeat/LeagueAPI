#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatChatSummoner { 
    uint64_t summonerId;
    std::string displayName;
    uint32_t summonerLevel;
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const LolChatChatSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["displayName"] = v.displayName; 
    j["summonerLevel"] = v.summonerLevel; 
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, LolChatChatSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}