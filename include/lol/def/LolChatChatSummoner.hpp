#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatChatSummoner { 
    uint64_t summonerId;
    int32_t profileIconId;
    std::string displayName;
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolChatChatSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["profileIconId"] = v.profileIconId; 
    j["displayName"] = v.displayName; 
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolChatChatSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}