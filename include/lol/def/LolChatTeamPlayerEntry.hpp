#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatTeamPlayerEntry { 
    uint64_t summonerId;
    std::string summonerInternalName;
    std::string summonerName; 
  };
  inline void to_json(json& j, const LolChatTeamPlayerEntry& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["summonerName"] = v.summonerName; 
  }
  inline void from_json(const json& j, LolChatTeamPlayerEntry& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
  }
}