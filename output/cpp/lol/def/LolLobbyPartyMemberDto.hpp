#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPartyMemberMetadataDto.hpp>
#include <lol/def/LolLobbyGameModeDto.hpp>
#include <lol/def/LolLobbyPartyMemberRoleEnum.hpp>
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
  void to_json(json& j, const LolLobbyPartyMemberDto& v) {
  j["inviteTimestamp"] = v.inviteTimestamp; 
  j["platformId"] = v.platformId; 
  j["ready"] = v.ready; 
  j["partyId"] = v.partyId; 
  j["puuid"] = v.puuid; 
  j["canInvite"] = v.canInvite; 
  j["invitedBySummonerId"] = v.invitedBySummonerId; 
  j["role"] = v.role; 
  j["summonerId"] = v.summonerId; 
  j["metadata"] = v.metadata; 
  j["gameMode"] = v.gameMode; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLobbyPartyMemberDto& v) {
  v.inviteTimestamp = j.at("inviteTimestamp").get<std::optional<uint64_t>>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.ready = j.at("ready").get<std::optional<bool>>(); 
  v.partyId = j.at("partyId").get<std::string>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.canInvite = j.at("canInvite").get<std::optional<bool>>(); 
  v.invitedBySummonerId = j.at("invitedBySummonerId").get<std::optional<uint64_t>>(); 
  v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>(); 
  v.gameMode = j.at("gameMode").get<std::optional<LolLobbyGameModeDto>>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}