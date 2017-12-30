#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatTeamPlayerEntry { 
    std::string summonerName;
    uint64_t summonerId;
    std::string summonerInternalName; 
  };
  inline void to_json(json& j, const LolChatTeamPlayerEntry& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["summonerInternalName"] = v.summonerInternalName; 
  }
  inline void from_json(const json& j, LolChatTeamPlayerEntry& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
  }
}