#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGatekeeperRestrictionDto.hpp"
#include "LolLobbyGameModeDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
namespace lol {
  struct LolLobbyPartyDto { 
    std::string partyId;
    int64_t eligibilityHash;
    std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>> eligibilityRestrictions;
    LolLobbyPartyChatDto chat;
    std::vector<LolLobbyPartyMemberDto> players;
    uint64_t version;
    int32_t maxPartySize;
    LolLobbyQueueRestrictionDto activeRestrictions;
    bool activityLocked;
    LolLobbyGameModeDto gameMode;
    uint64_t activityStartedUtcMillis;
    std::string platformId;
    uint64_t activityResumeUtcMillis;
    std::string partyType; 
  };
  inline void to_json(json& j, const LolLobbyPartyDto& v) {
    j["partyId"] = v.partyId; 
    j["eligibilityHash"] = v.eligibilityHash; 
    if(v.eligibilityRestrictions)
      j["eligibilityRestrictions"] = *v.eligibilityRestrictions;
    j["chat"] = v.chat; 
    j["players"] = v.players; 
    j["version"] = v.version; 
    j["maxPartySize"] = v.maxPartySize; 
    j["activeRestrictions"] = v.activeRestrictions; 
    j["activityLocked"] = v.activityLocked; 
    j["gameMode"] = v.gameMode; 
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis; 
    j["platformId"] = v.platformId; 
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis; 
    j["partyType"] = v.partyType; 
  }
  inline void from_json(const json& j, LolLobbyPartyDto& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
    if(auto it = j.find("eligibilityRestrictions"); it != j.end() && !it->is_null())
      v.eligibilityRestrictions = it->get<std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>>>(); 
    v.chat = j.at("chat").get<LolLobbyPartyChatDto>(); 
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto>>(); 
    v.version = j.at("version").get<uint64_t>(); 
    v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto>(); 
    v.activityLocked = j.at("activityLocked").get<bool>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>(); 
    v.partyType = j.at("partyType").get<std::string>(); 
  }
}