#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyPartyMemberDto.hpp>
#include <leagueapi/definitions/LolLobbyQueueRestrictionDto.hpp>
#include <leagueapi/definitions/LolLobbyGameModeDto.hpp>
#include <leagueapi/definitions/LolLobbyGatekeeperRestrictionDto.hpp>
#include <leagueapi/definitions/LolLobbyPartyChatDto.hpp>

namespace leagueapi {
  struct LolLobbyPartyDto { /**/ 
    std::vector<LolLobbyPartyMemberDto> players;/**/
    LolLobbyPartyChatDto chat;/**/
    std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>> eligibilityRestrictions;/**/
    uint64_t version;/**/
    uint64_t activityStartedUtcMillis;/**/
    std::string platformId;/**/
    LolLobbyQueueRestrictionDto activeRestrictions;/**/
    int32_t maxPartySize;/**/
    bool activityLocked;/**/
    std::string partyId;/**/
    int64_t eligibilityHash;/**/
    LolLobbyGameModeDto gameMode;/**/
    std::string partyType;/**/
    uint64_t activityResumeUtcMillis;/**/
  };
  static void to_json(json& j, const LolLobbyPartyDto& v) { 
    j["players"] = v.players;
    j["chat"] = v.chat;
    j["eligibilityRestrictions"] = v.eligibilityRestrictions;
    j["version"] = v.version;
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis;
    j["platformId"] = v.platformId;
    j["activeRestrictions"] = v.activeRestrictions;
    j["maxPartySize"] = v.maxPartySize;
    j["activityLocked"] = v.activityLocked;
    j["partyId"] = v.partyId;
    j["eligibilityHash"] = v.eligibilityHash;
    j["gameMode"] = v.gameMode;
    j["partyType"] = v.partyType;
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis;
  }
  static void from_json(const json& j, LolLobbyPartyDto& v) { 
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto>>(); 
    v.chat = j.at("chat").get<LolLobbyPartyChatDto>(); 
    v.eligibilityRestrictions = j.at("eligibilityRestrictions").get<std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>>>(); 
    v.version = j.at("version").get<uint64_t>(); 
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto>(); 
    v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
    v.activityLocked = j.at("activityLocked").get<bool>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.partyType = j.at("partyType").get<std::string>(); 
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>(); 
  }
} 