#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace lol {
  struct LolLobbyPartyMemberDto { 
    std::string partyId;
    std::optional<bool> ready;
    std::optional<bool> canInvite;
    uint64_t accountId;
    std::string puuid;
    LolLobbyPartyMemberMetadataDto metadata;
    std::optional<uint64_t> invitedBySummonerId;
    LolLobbyPartyMemberRoleEnum role;
    std::optional<LolLobbyGameModeDto> gameMode;
    std::optional<uint64_t> inviteTimestamp;
    std::string platformId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLobbyPartyMemberDto& v) {
    j["partyId"] = v.partyId; 
    if(v.ready)
      j["ready"] = *v.ready;
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    j["metadata"] = v.metadata; 
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    j["role"] = v.role; 
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    j["platformId"] = v.platformId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLobbyPartyMemberDto& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<std::optional<bool>>(); 
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<std::optional<bool>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>(); 
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<std::optional<uint64_t>>(); 
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<std::optional<LolLobbyGameModeDto>>(); 
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<std::optional<uint64_t>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}