#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyPartyMemberRoleEnum.hpp>
#include <leagueapi/definitions/LolLobbyPartyMemberMetadataDto.hpp>
#include <leagueapi/definitions/LolLobbyGameModeDto.hpp>

namespace leagueapi {
  struct LolLobbyPartyMemberDto { /**/ 
    LolLobbyPartyMemberMetadataDto metadata;/**/
    std::string platformId;/**/
    std::optional<bool> canInvite;/**/
    LolLobbyPartyMemberRoleEnum role;/**/
    std::optional<uint64_t> inviteTimestamp;/**/
    std::optional<bool> ready;/**/
    std::optional<uint64_t> invitedBySummonerId;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
    std::string partyId;/**/
    std::string puuid;/**/
    std::optional<LolLobbyGameModeDto> gameMode;/**/
  };
  static void to_json(json& j, const LolLobbyPartyMemberDto& v) { 
    j["metadata"] = v.metadata;
    j["platformId"] = v.platformId;
    j["canInvite"] = v.canInvite;
    j["role"] = v.role;
    j["inviteTimestamp"] = v.inviteTimestamp;
    j["ready"] = v.ready;
    j["invitedBySummonerId"] = v.invitedBySummonerId;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["partyId"] = v.partyId;
    j["puuid"] = v.puuid;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolLobbyPartyMemberDto& v) { 
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.canInvite = j.at("canInvite").get<std::optional<bool>>(); 
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum>(); 
    v.inviteTimestamp = j.at("inviteTimestamp").get<std::optional<uint64_t>>(); 
    v.ready = j.at("ready").get<std::optional<bool>>(); 
    v.invitedBySummonerId = j.at("invitedBySummonerId").get<std::optional<uint64_t>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::optional<LolLobbyGameModeDto>>(); 
  }
} 