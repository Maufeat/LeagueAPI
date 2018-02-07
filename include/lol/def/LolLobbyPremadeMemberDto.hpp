#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace lol {
  struct LolLobbyPremadeMemberDto { 
    std::string displayName;
    std::string puuid;
    std::string partyId;
    uint64_t summonerId;
    LolLobbyPartyMemberRoleEnum role; 
  };
  inline void to_json(json& j, const LolLobbyPremadeMemberDto& v) {
    j["displayName"] = v.displayName; 
    j["puuid"] = v.puuid; 
    j["partyId"] = v.partyId; 
    j["summonerId"] = v.summonerId; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, LolLobbyPremadeMemberDto& v) {
    v.displayName = j.at("displayName").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
  }
}