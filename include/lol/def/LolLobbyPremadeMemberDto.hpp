#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace lol {
  struct LolLobbyPremadeMemberDto { 
    std::string puuid;
    uint64_t summonerId;
    std::string displayName;
    std::string partyId;
    LolLobbyPartyMemberRoleEnum role; 
  };
  inline void to_json(json& j, const LolLobbyPremadeMemberDto& v) {
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["displayName"] = v.displayName; 
    j["partyId"] = v.partyId; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, LolLobbyPremadeMemberDto& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
  }
}