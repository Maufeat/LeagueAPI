#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPartyMemberRoleEnum.hpp>
namespace lol {
  struct LolLobbyPremadeMemberDto { 
    LolLobbyPartyMemberRoleEnum role;
    std::string displayName;
    uint64_t summonerId;
    std::string puuid;
    std::string partyId; 
  };
  void to_json(json& j, const LolLobbyPremadeMemberDto& v) {
  j["role"] = v.role; 
  j["displayName"] = v.displayName; 
  j["summonerId"] = v.summonerId; 
  j["puuid"] = v.puuid; 
  j["partyId"] = v.partyId; 
  }
  void from_json(const json& j, LolLobbyPremadeMemberDto& v) {
  v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
  v.displayName = j.at("displayName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.partyId = j.at("partyId").get<std::string>(); 
  }
}