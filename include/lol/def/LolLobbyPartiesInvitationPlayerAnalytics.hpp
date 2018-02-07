#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyPartiesInvitationPlayerAnalytics { 
    std::string puuid;
    uint64_t summonerId;
    std::string role; 
  };
  inline void to_json(json& j, const LolLobbyPartiesInvitationPlayerAnalytics& v) {
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, LolLobbyPartiesInvitationPlayerAnalytics& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.role = j.at("role").get<std::string>(); 
  }
}