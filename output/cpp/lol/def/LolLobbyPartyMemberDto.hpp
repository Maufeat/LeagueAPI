#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace lol {
  struct LolLobbyPartyMemberDto { 
    std::optional<uint64_t> inviteTimestamp;
    std::string platformId;
    std::optional<bool> ready;
    std::string partyId;
    std::string puuid;
    std::optional<bool> canInvite;
    std::optional<uint64_t> invitedBySummonerId;
    LolLobbyPartyMemberRoleEnum role;
    uint64_t summonerId;
    LolLobbyPartyMemberMetadataDto metadata;
    std::optional<LolLobbyGameModeDto> gameMode;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolLobbyPartyMemberDto& v) {
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    j["platformId"] = v.platformId; 
    if(v.ready)
      j["ready"] = *v.ready;
    j["partyId"] = v.partyId; 
    j["puuid"] = v.puuid; 
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    j["role"] = v.role; 
    j["summonerId"] = v.summonerId; 
    j["metadata"] = v.metadata; 
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolLobbyPartyMemberDto& v) {
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<std::optional<uint64_t>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<std::optional<bool>>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<std::optional<bool>>(); 
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<std::optional<uint64_t>>(); 
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>(); 
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<std::optional<LolLobbyGameModeDto>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}