#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
namespace lol {
  struct LolLobbyPartyMemberDto { 
    std::string platformId;
    std::string puuid;
    uint64_t accountId;
    uint64_t summonerId;
    std::string partyId;
    LolLobbyPartyMemberRoleEnum role;
    std::optional<LolLobbyGameModeDto> gameMode;
    std::optional<bool> ready;
    LolLobbyPartyMemberMetadataDto metadata;
    std::optional<uint64_t> invitedBySummonerId;
    std::optional<uint64_t> inviteTimestamp;
    std::optional<bool> canInvite; 
  };
  inline void to_json(json& j, const LolLobbyPartyMemberDto& v) {
    j["platformId"] = v.platformId; 
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["partyId"] = v.partyId; 
    j["role"] = v.role; 
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    if(v.ready)
      j["ready"] = *v.ready;
    j["metadata"] = v.metadata; 
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
  }
  inline void from_json(const json& j, LolLobbyPartyMemberDto& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<std::optional<LolLobbyGameModeDto>>(); 
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<std::optional<bool>>(); 
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>(); 
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<std::optional<uint64_t>>(); 
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<std::optional<uint64_t>>(); 
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<std::optional<bool>>(); 
  }
}