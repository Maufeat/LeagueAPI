#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyGatekeeperRestrictionDto.hpp"
namespace lol {
  struct LolLobbyPartyDto { 
    std::string partyId;
    std::string platformId;
    std::vector<LolLobbyPartyMemberDto> players;
    LolLobbyPartyChatDto chat;
    int32_t maxPartySize;
    std::string partyType;
    LolLobbyGameModeDto gameMode;
    bool activityLocked;
    uint64_t version;
    uint64_t activityStartedUtcMillis;
    uint64_t activityResumeUtcMillis;
    LolLobbyQueueRestrictionDto activeRestrictions;
    int64_t eligibilityHash;
    std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>> eligibilityRestrictions; 
  };
  inline void to_json(json& j, const LolLobbyPartyDto& v) {
    j["partyId"] = v.partyId; 
    j["platformId"] = v.platformId; 
    j["players"] = v.players; 
    j["chat"] = v.chat; 
    j["maxPartySize"] = v.maxPartySize; 
    j["partyType"] = v.partyType; 
    j["gameMode"] = v.gameMode; 
    j["activityLocked"] = v.activityLocked; 
    j["version"] = v.version; 
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis; 
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis; 
    j["activeRestrictions"] = v.activeRestrictions; 
    j["eligibilityHash"] = v.eligibilityHash; 
    if(v.eligibilityRestrictions)
      j["eligibilityRestrictions"] = *v.eligibilityRestrictions;
  }
  inline void from_json(const json& j, LolLobbyPartyDto& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto>>(); 
    v.chat = j.at("chat").get<LolLobbyPartyChatDto>(); 
    v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
    v.partyType = j.at("partyType").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.activityLocked = j.at("activityLocked").get<bool>(); 
    v.version = j.at("version").get<uint64_t>(); 
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>(); 
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>(); 
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
    if(auto it = j.find("eligibilityRestrictions"); it != j.end() && !it->is_null())
      v.eligibilityRestrictions = it->get<std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>>>(); 
  }
}