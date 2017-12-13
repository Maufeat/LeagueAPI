#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPartyMemberRoleEnum.hpp>
namespace lol {
  struct LolLobbyPremadeMemberDto { 
    std::string partyId;
    uint64_t summonerId;
    LolLobbyPartyMemberRoleEnum role;
    std::string puuid;
    std::string displayName; 
  };
  void to_json(json& j, const LolLobbyPremadeMemberDto& v) {
  j["partyId"] = v.partyId; 
  j["summonerId"] = v.summonerId; 
  j["role"] = v.role; 
  j["puuid"] = v.puuid; 
  j["displayName"] = v.displayName; 
  }
  void from_json(const json& j, LolLobbyPremadeMemberDto& v) {
  v.partyId = j.at("partyId").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.displayName = j.at("displayName").get<std::string>(); 
  }
}