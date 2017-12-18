#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatTeamPlayerEntry { 
    std::string summonerInternalName;
    std::string summonerName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolChatTeamPlayerEntry& v) {
    j["summonerInternalName"] = v.summonerInternalName; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolChatTeamPlayerEntry& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}