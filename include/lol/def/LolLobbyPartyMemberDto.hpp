#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
namespace lol {
  struct LolLobbyPartyMemberDto { 
    uint64_t summonerId;
    std::optional<bool> ready;
    std::optional<uint64_t> inviteTimestamp;
    std::string platformId;
    std::string partyId;
    std::string puuid;
    std::optional<uint64_t> invitedBySummonerId;
    std::optional<LolLobbyGameModeDto> gameMode;
    uint64_t accountId;
    LolLobbyPartyMemberMetadataDto metadata;
    LolLobbyPartyMemberRoleEnum role;
    std::optional<bool> canInvite; 
  };
  inline void to_json(json& j, const LolLobbyPartyMemberDto& v) {
    j["summonerId"] = v.summonerId; 
    if(v.ready)
      j["ready"] = *v.ready;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    j["platformId"] = v.platformId; 
    j["partyId"] = v.partyId; 
    j["puuid"] = v.puuid; 
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    j["accountId"] = v.accountId; 
    j["metadata"] = v.metadata; 
    j["role"] = v.role; 
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
  }
  inline void from_json(const json& j, LolLobbyPartyMemberDto& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<std::optional<bool>>(); 
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<std::optional<uint64_t>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<std::optional<uint64_t>>(); 
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<std::optional<LolLobbyGameModeDto>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>(); 
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<std::optional<bool>>(); 
  }
}